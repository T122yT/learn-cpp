#include"tcpSocket.h"
#include<stdio.h>

bool init_Socket()
{
	//wsa windows socket async  windows�첽�׽���
	//parm1:�����socket�汾 2.2 2.1 1.0   parm2:��������
	WSADATA wsadata;
	if (0 != WSAStartup(MAKEWORD(2, 2), &wsadata))
	{
		printf("WSAStartup failed code %d", WSAGetLastError());
		return false;
	}

	return true;
}

bool close_Socket()
{
	if (0 != WSACleanup())
	{
		printf("WSASCleanup failed code %d", WSAGetLastError());
		return false;
	}
	return true;
}

SOCKET createServerSocket()
{
	//1.�����յ�socket		���ֻ�
	//parm1:af ��ַЭ���� ipv4  ipv6
	//parm2:type ����Э������  ��ʽ�׽���   ���ݱ�
	//parm3:protocl ʹ�þ����ĳ������Э��
	SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (fd == INVALID_SOCKET)
	{
		err("socket");
		return INVALID_SOCKET;
	}

	//2.��socket��ip��ַ�Ͷ˿ں�   �򿨲��ܴ�绰
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;	//�ʹ���socketʱ�Ĵ���Э���屣��һ��
	/*
		�����ֽ��򣨴�ˣ�---- �͵�ַ���λ
		�����ֽ���С�ˣ�---- �͵�ַ���λ
	*/
	addr.sin_port = htons(PORT);	//heonsת���ֽ���
	addr.sin_addr.S_un.S_addr = ADDR_ANY;	//inet_addr("127.0.0.1");


	if (SOCKET_ERROR == bind(fd, &addr, sizeof(addr)))
	{
		err("bind ");
		return false;
	}

	//3.�����绰
	listen(fd, 10);



	return fd;
}

SOCKET createClientSocket(const char * ip)
{
	//1.�����յ�socket		���ֻ�
	//parm1:af ��ַЭ���� ipv4  ipv6
	//parm2:type ����Э������  ��ʽ�׽���   ���ݱ�
	//parm3:protocl ʹ�þ����ĳ������Э��
	SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (fd == INVALID_SOCKET)
	{
		err("socket");
		return INVALID_SOCKET;
	}

	//2.���������������
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;	//�ʹ���socketʱ�Ĵ���Э���屣��һ��
	addr.sin_port = htons(PORT);	//heonsת���ֽ���
	addr.sin_addr.S_un.S_addr = inet_addr(ip);
	if (INVALID_SOCKET == connect(fd, (struct sockaddr*)&addr, sizeof(addr)))
	{
		err("connect");
		return false;
	}

	return fd;
}

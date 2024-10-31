#include"tcpSocket.h"
#include<stdio.h>

bool init_Socket()
{
	//wsa windows socket async  windows异步套接字
	//parm1:请求的socket版本 2.2 2.1 1.0   parm2:传出参数
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
	//1.创建空的socket		买手机
	//parm1:af 地址协议族 ipv4  ipv6
	//parm2:type 传输协议类型  流式套接字   数据报
	//parm3:protocl 使用具体的某个传输协议
	SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (fd == INVALID_SOCKET)
	{
		err("socket");
		return INVALID_SOCKET;
	}

	//2.给socket绑定ip地址和端口号   买卡才能打电话
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;	//和创建socket时的传输协议族保持一致
	/*
		本地字节序（大端）---- 低地址存高位
		网络字节序（小端）---- 低地址存低位
	*/
	addr.sin_port = htons(PORT);	//heons转换字节序
	addr.sin_addr.S_un.S_addr = ADDR_ANY;	//inet_addr("127.0.0.1");


	if (SOCKET_ERROR == bind(fd, &addr, sizeof(addr)))
	{
		err("bind ");
		return false;
	}

	//3.监听电话
	listen(fd, 10);



	return fd;
}

SOCKET createClientSocket(const char * ip)
{
	//1.创建空的socket		买手机
	//parm1:af 地址协议族 ipv4  ipv6
	//parm2:type 传输协议类型  流式套接字   数据报
	//parm3:protocl 使用具体的某个传输协议
	SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (fd == INVALID_SOCKET)
	{
		err("socket");
		return INVALID_SOCKET;
	}

	//2.与服务器建立链接
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;	//和创建socket时的传输协议族保持一致
	addr.sin_port = htons(PORT);	//heons转换字节序
	addr.sin_addr.S_un.S_addr = inet_addr(ip);
	if (INVALID_SOCKET == connect(fd, (struct sockaddr*)&addr, sizeof(addr)))
	{
		err("connect");
		return false;
	}

	return fd;
}

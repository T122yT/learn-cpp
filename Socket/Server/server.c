#include"../tcpSocket/tcpSocket.h"

int main()
{
	init_Socket();

	SOCKET serfd = createServerSocket();
	printf("wait client connect...\n");
	//����пͻ�����������
	SOCKET clifd = accept(serfd, NULL, NULL);
	if (INVALID_SOCKET == clifd)
	{
		err("accept");
	}

	//���ӳɹ��Ϳ��ԺͿͻ���ͨ��
	char buf[512] = { 0 };

	while (true)
	{
		//recv��ָ����socket������Ϣ
		if (0 < recv(clifd, buf, sizeof(buf), 0))
		{
			printf("recv:%s\n", buf);
		}

		//������Ϣ	
		printf("send>");
		gets_s(buf, sizeof(buf));
		if (SOCKET_ERROR == send(clifd, buf, sizeof(buf), 0))
		{
			err("send");
		}
	}


	closesocket(clifd);
	closesocket(serfd);

	close_Socket();
	printf("server--------end-------");

	getchar();
	return 0;
}

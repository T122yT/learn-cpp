#include"../tcpSocket/tcpSocket.h"

int main()
{
	init_Socket();

	SOCKET serfd = createServerSocket();
	printf("wait client connect...\n");
	//如果有客户端请求链接
	SOCKET clifd = accept(serfd, NULL, NULL);
	if (INVALID_SOCKET == clifd)
	{
		err("accept");
	}

	//连接成功就可以和客户端通信
	char buf[512] = { 0 };

	while (true)
	{
		//recv从指定的socket接收消息
		if (0 < recv(clifd, buf, sizeof(buf), 0))
		{
			printf("recv:%s\n", buf);
		}

		//发送消息	
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

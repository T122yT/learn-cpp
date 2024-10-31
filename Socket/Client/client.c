#include"../tcpSocket/tcpSocket.h"

int main()
{
	init_Socket();

	SOCKET fd = createClientSocket("127.0.0.1");

	char buf[512] = "hello";

	while (true)
	{
		//发送消息	
		printf("send>");
		gets_s(buf, sizeof(buf));
		if (SOCKET_ERROR == send(fd, buf, sizeof(buf), 0))
		{
			err("send");
		}
		//recv从指定的socket接收消息
		if (0 < recv(fd, buf, sizeof(buf), 0))
		{
			printf("recv:%s\n", buf);
			memset(buf, 0, sizeof(buf));
		}
	}



	closesocket(fd);
	close_Socket();
	printf("client--------end-------");
	getchar();
	return 0;
}
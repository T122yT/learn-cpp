#include"../tcpSocket/tcpSocket.h"

int main()
{
	init_Socket();

	SOCKET fd = createClientSocket("127.0.0.1");

	char buf[512] = "hello";

	while (true)
	{
		//������Ϣ	
		printf("send>");
		gets_s(buf, sizeof(buf));
		if (SOCKET_ERROR == send(fd, buf, sizeof(buf), 0))
		{
			err("send");
		}
		//recv��ָ����socket������Ϣ
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
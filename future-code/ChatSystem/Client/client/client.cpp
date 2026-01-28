#pragma comment(lib,"ws2_32.lib")
#include <WinSock2.h>
#include <iostream>

#pragma warning(disable:4996)

SOCKET connection;

void clientHandler()
{
	char message[256];
	while (true)
	{
		recv(connection, message, sizeof(message), NULL);
		std::cout << message << std::endl;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	WSAData wsaData;
	WORD DLLVersion = MAKEWORD(2, 1);
	if (WSAStartup(DLLVersion, &wsaData) != 0) {
		std::cout << "Error" << "\n";
		exit(1);
	}
	SOCKADDR_IN addr;
	int sizeofaddr = sizeof(addr);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	addr.sin_port = htons(1111);
	addr.sin_family = AF_INET;

	connection = socket(AF_INET, SOCK_STREAM, NULL);

	if (connect(connection, (SOCKADDR*)&addr, sizeof(addr)) != 0) {
		std::cout << "Error";
		system("pause");
		return 1;
	}
	std::cout << "Connected\n";

	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)clientHandler, NULL, NULL,NULL);
	char message[256];
	while (true)
	{
		std::cin.getline(message, 256);
		send(connection, message, sizeof(message), NULL);
	}

	system("pause");
}

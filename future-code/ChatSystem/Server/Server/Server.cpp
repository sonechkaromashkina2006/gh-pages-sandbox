#pragma comment(lib,"ws2_32.lib")
#include "WinSock2.h"
#include <iostream>

#pragma warning(disable:4996)

SOCKET connections[100];
int count = 0;

void clientHandler(int index) {
	char message[256];
	while (true) 
	{
		recv(connections[index], message, sizeof(message), NULL);

		for (int i = 0; i < count; i++) 
		{
			if (i != index) send(connections[i], message, sizeof(message), NULL);
		}
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

	SOCKET slisten = socket(AF_INET, SOCK_STREAM, NULL);
	bind(slisten, (SOCKADDR*)&addr, sizeof(addr));
	listen(slisten, SOMAXCONN);

	for (int i = 0; i < 100; i++)
	{
		SOCKET newConnection;
		newConnection = accept(slisten, (SOCKADDR*)&addr, &sizeofaddr);

		if (newConnection == 0) std::cout << "Error";
		else {
			std::cout << "Client connected" << "\n";
			connections[count] = newConnection;
			count++;
			CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)clientHandler, (LPVOID)i, NULL, NULL);
		}
	}
}

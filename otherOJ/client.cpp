#include "client.h"
void Client::ChangeServerName(char name)
{
	Client::ServerName=name;//��̬��Աǰ��Ҫ���ϣ��� 
	Client::ClientNum++;
}
int getClientNum()
{
	return ClientNum;
}

#include "client.h"
void Client::ChangeServerName(char name)
{
	Client::ServerName=name;//静态成员前面要加上：： 
	Client::ClientNum++;
}
int getClientNum()
{
	return ClientNum;
}

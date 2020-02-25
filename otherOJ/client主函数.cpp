#include "client.h"
#include <iostream>
using namespace std;
int Client::ClientNum=0;
char Client::ServerName="a";
int main()
{
	Client c1,c2;
	c1.ChangeServerName('a');
	cout<<c1.getClientNum<<endl;
	c2.ChangeServerName('b');
	cout<<c2.gatClientNum()<<endl;
	return 0;
 } 
		

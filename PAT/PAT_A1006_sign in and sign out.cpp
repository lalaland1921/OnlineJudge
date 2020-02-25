#include <iostream>
using namespace std;
struct stuff
{
	char id[16];
	int sign_in,sign_out;
}temp,unlck,lock;
int change(int h,int m,int s)
{
	return h*10000+m*100+s;
}
int main()
{
	int n,h,m,s;
	cin>>n;
	unlck.sign_in=235959;
	lock.sign_out=000000;
	while(n--)
	{
		cin>>temp.id;
		cin>>h;
		cin.get();
		cin>>m;
		cin.get();
		cin>>s;
		temp.sign_in=change(h,m,s);
		if(temp.sign_in<unlck.sign_in)
		unlck=temp;
		else;
		cin>>h;
		cin.get();
		cin>>m;
		cin.get();
		cin>>s;
		temp.sign_out=change(h,m,s);
		if(temp.sign_out>lock.sign_out)
		lock=temp;
	}
	cout<<unlck.sign_in<<" "<<lock.sign_out;
	return 0;
}

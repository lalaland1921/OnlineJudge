#include <iostream>
using namespace std;
int main()
{
	int a,b,d,e[31],n=0;
	cin>>a;
	cin>>b;
	cin>>d;
	a+=b;
	do
	{
		e[n++]=a%d;
		a=a/d;
	}while(a!=0);
	for(int i=n-1;i<=0;i--)
	{
		cout<<e[i];
	}
	return 0;
}

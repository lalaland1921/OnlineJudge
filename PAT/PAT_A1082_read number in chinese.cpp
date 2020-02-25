#include <iostream>
using namespace std;
char d[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
void change(int n)
{
	int temp;
	if(n>=1000)
	{
		temp=n/1000;
		cout<<d[temp]<<" Qian ";
		n%=1000;
		if(n<100&&n>0)
		cout<<"ling ";
	}
	if(n>=100)
	{
		temp=n/100;
		cout<<d[temp]<<" Bai ";
		n%=100;
		if(n<10&&n>0)
		cout<<"ling ";
	}
	if(n>=10)
	{
		temp=n/10;
		cout<<d[temp]<<" Shi ";
		n%=10;
	}
	if(n>0)
	cout<<d[n]<<" ";
}
int main()
{
	int n,temp;
	cin>>n;
	if(n<0)
	{
		cout<<"Fu ";
		n=-n;
	}
	if(n>=100000000)
	{
		temp=n/100000000;
		change(temp);
		cout<<"Yi ";
		n=n%100000000;
		if(n<10000000&&n>0)
		cout<<"ling ";
	}
	if(n>=10000)
	{
		temp=n/10000;
		change(temp);
		cout<<"Wan ";
		n=n%10000;
		if(n<1000&&n>0)
		cout<<"ling ";
	}
	if(n>0)
	{
		change(n);
	}
	//cout<<"\b";
	return 0;
}

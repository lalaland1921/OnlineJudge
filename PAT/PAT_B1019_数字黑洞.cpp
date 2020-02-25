#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
void change1(int a,int b[])
{
	for(int i=3;i>=0;i++)
	{
		b[i]=a%10;
		a/10;
	}
}
int change2(int a[])
{
	int b=0;
	for(int i=0;i<4;i++)
	{
		b=10*b+a[i];
	}
	return b;
}
int main()
{
	int n,a[5],m;
	cin>>n;
	while(n!=6174&&n!=0)
	{
		change1(n,a);
		sort(a,a+4,cmp);
		cout<<a<<"-";
		m=change2(a);
		sort(a,a+4);
		cout<<a<<"=";
		n=change2(a);
		change1(m-n,a);
		cout<<a<<endl;
		n=m-n;
	}
	return 0;
}

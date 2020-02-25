#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
void change(int n,int a[])
{
	for(int i=3;i>=0;i--)
	{
		a[i]=n%10;
		n=n/10;
	}
}
int rev(int a[])
{
	int n=0;
	for(int i=0;i<4;i++)
	{
		n+=a[i]*pow(10,(3-i));
	}
	return n;
}
int main()
{
	int n,a[4]={0},n1=0,n2=0;
	scanf("%d",&n);
	while(n!=0&&n!=6174)
	{
		change(n,a);
		sort(a,a+4,cmp);
		n1=rev(a);
		sort(a,a+4);
		n2=rev(a);
		n=n1-n2;
		printf("%04d - %04d = %04d\n",n1,n2,n);
	}
	return 0;
}

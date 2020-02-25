#include <cstdio>
using namespace std;
int main()
{
	long long a,b,c,d, e[32]={0},i=0;
	scanf("%lld %lld %lld",&a,&b,&d);
	c=a+b;
	while(c>0)
	{
		e[i++]=c%d;
		c=c/d;
	}
	if(i==0)
	printf("0");
	while(i--)
	{
		printf("%lld",e[i]);
	}
	return 0;
} 

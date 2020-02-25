#include <cstdio>
#include <cmath>
using namespace std;
bool isprime(int a)
{
	if(a<=1)
	return false;
	else
	{
		int sq=(int)sqrt(1.0*a);
		for(int i=2;i<=sq;i++)
		{
			if(a%i==0)
			return false;
		}
	}
	return true;
}
int main()
{
	int n,i=2;
	scanf("%d",&n);
	printf("%d=",n);
	bool flag=false;
	if(n==1)
	printf("1");
	while(n>1)
	{
		int k=0;
		while(isprime(i)==true&&n%i==0)
		{
			k++;
			n/=i;
		}
		if(k>0)
		{
			if(flag==true)
			printf("*");
			printf("%d",i);
			if(k>1)
			printf("^%d",k);
			flag=true;
		}
		i++;
	}
	return 0;
}

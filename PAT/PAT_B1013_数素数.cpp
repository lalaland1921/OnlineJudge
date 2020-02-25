#include <cstdio>
#include <cmath>
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
	int num=2,count=0,m,n;
	scanf("%d %d",&m,&n);
	while(count<n)
	{
		if(isprime(num)==true)
		{
			count++;
			if(count>=m&&count<=n)
			{
				printf("%d",num);
				if((count-m+1)%10==0)
				printf("\n");
				else if(count!=n)
				printf(" "); 
			}
		}
		num++;
	}
	return 0;
}

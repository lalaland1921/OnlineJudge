#include <stdio.h>
int main()
{
	int t;
	long long a,b,c;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%lld %lld %lld",&a,&b,&c);
		printf("Case #%d: ",i+1);
		if(a+b>c)
		printf("true\n");
		else
		printf("false\n");
	}
	return 0;
} 

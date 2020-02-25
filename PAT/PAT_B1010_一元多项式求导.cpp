#include <stdio.h>
int main()
{
	int co,exp,flag=0;
	while(scanf("%d %d",&co,&exp)!=EOF)
	{
		if(exp!=0)
		{
			if(flag==1)
			printf(" ");
			printf("%d %d",co*exp,exp-1);
			flag=1;
		}
	}
	if(flag==0)
	printf("0 0");//注意！零多项式 
	return 0;
}

#include <stdio.h>
int main()
{
	int a1=0,a2=0,a3=0,a5=0,num=0,n,t,sign=1,flag=0;
	float a4=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n);
		switch(n%5)
		{ 
			case 0:
				if(n%2==0)a1+=n;break;
			case 1:
				a2+=sign*n;
				sign*=-1;
				flag=1;
				break;
			case 2:
				a3++;
				break;
			case 3:
				a4+=n;
				num++;
				break;
			case 4:
				if(n>a5)
				a5=n;
		} 
	}
	if(a1==0)
	printf("N ");
	else
	printf("%d ",a1);
	if(flag==0)
	printf("N ");
	else
	printf("%d ",a2);
	if(a3==0)
	printf("N ");
	else
	printf("%d ",a3);
	if(a4==0)
	printf("N ");
	else
	printf("%.1f ",a4/num);
	if(a5<1)
	printf("N");
	else
	printf("%d",a5);
	return 0;
}

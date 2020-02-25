#include <cstdio>
int main()
{
	int n,k,count,a[1010]={0},i=1,id=1;
	scanf("%d%d",&n,&k);
	count=n;
	while(count>0)
	{
		while(a[id]==1)
		id=id%n+1;
		if(count==1)
		{
			printf("%d",id);
			count--;
		}
		if(i%k==0||i%10==k)
		{
			count--;
			a[id]=1;
		}
		i++;
		id=id%n+1;
	}
	return 0;
}

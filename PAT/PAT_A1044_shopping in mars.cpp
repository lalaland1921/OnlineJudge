#include <iostream>
using namespace std;
struct diamond
{
	int l,r,sum;
}dia[100002];
int main()
{
	int n,m,d[100002];
	cin>>n>>m;
	d[0]=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&d[i]);
	}
	int min=1000000000,sum=0,count=0;
	for(int i=1,j=0;i<=n;i++)
	{
		sum=sum-d[i-1];
		while(sum<m)
		{
			j++;
			sum=sum+d[j];
		}
		if(min>=sum)
		{
			min=sum;
			dia[count].l=i;
			dia[count].r=j;
			dia[count].sum=sum;
			count++;
		}
	}
	for(int i=0;i<count;i++)
	{
		if(dia[i].sum==min)
		printf("%d-%d\n",dia[i].l,dia[i].r);
	}
	return 0;
}

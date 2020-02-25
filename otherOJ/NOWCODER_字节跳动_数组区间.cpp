#include <cstdio>
using namespace std;
int main()
{
	int a[500001],n,sum[500001]={0},ans=0,temp;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum[i]=sum[i-1]+a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int j=i;
		while(j<=n&&a[j]>=a[i])
		j++;
		temp=a[i]*(sum[j-1]-sum[i-1]);
		if(temp>ans)
		ans=temp;
	}
	printf("%d",ans);
	return 0;
}

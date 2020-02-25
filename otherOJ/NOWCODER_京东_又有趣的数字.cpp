#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[100001],minn=10000000,ans1=0,ans2=0,i;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		sort(a,a+n);
		for(i=1;i<n;i++)
		{
			if(a[i]-a[i-1]<minn)
			{
				minn=a[i]-a[i-1];
				ans1=1;
			}
			else if(a[i]-a[i-1]==minn)
			ans1++;
		}
		i=n-1;
		while(i>=0&&a[i]==a[n-1])
		{
			i--;
			ans2++;
		}
		printf("%d %d\n",ans1,ans2);
	}
	return 0;
}

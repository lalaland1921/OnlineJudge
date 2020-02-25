#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n,ans,a[1010];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	ans=a[n-1];
	for(int i=1;i<n;i++)
	{
		if(a[i]-a[i-1]<ans)
		ans=a[i]-a[i-1];
	}
	printf("%d",ans);
	return 0;
}

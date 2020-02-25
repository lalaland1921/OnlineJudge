#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[10001],mid;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		continue;
		for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		sort(a,a+n);
		if(n%2==1)
		mid=a[n/2];
		else
		mid=1.0*(a[n/2-1]+a[n/2])/2;
		printf("%d",mid);
	}
	return 0;
}

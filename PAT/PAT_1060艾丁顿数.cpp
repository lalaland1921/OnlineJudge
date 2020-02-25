#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[100001],e;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,a+n);
	e=n;
	while(e>=0&&a[n-e]<=e)
	e--;
	printf("%d",e);
	return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int m,n,a[1000001],b[1000001],ans,mid;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	a[m]=b[n]=2^31-1;
	mid=(m+n+1)/2;
	sort(a,a+m);
	sort(b,b+n);
	int count=0,i=0,j=0;
	while(count<mid)
	{
		if(a[i]<=b[j])
		{
			ans=a[i];
			i++;			
		}
		else
		{
			ans=b[j];
			j++;
		}
		count++;
	}
	cout<<ans;
	return 0;
}

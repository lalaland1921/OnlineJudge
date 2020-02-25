#include <iostream>
#include <algorithm>
using namespace std;
int p,k,n,num[100001];
int binary_search(int i,long long x)
{
	int l=i,r=n-1,mid;
	while(l<r)
	{
		mid=(l+r)/2;
		if(num[r]<=x)
		return r;
		else
		{
			if(num[mid]<=x)
			{
				if(l!=r-1)
				l=mid;
				else
				return l;
			}
			else
			r=mid;
		}
	}
	return l;
}
int main()
{
	int right,ans=0;
	cin>>n>>p;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	sort(num,num+n);
	for(k=0;k<n;k++)
	{
		right=binary_search(k,(long long)num[k]*p);
		if(right-k+1>ans)
		ans=right-k+1;
	}
	cout<<ans;
	return 0;
}

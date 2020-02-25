#include <iostream>
#include <algorithm>
using namespace std; 
int n,m,a[100010];
int find(int i)
{
	int left=i+1,right=n-1,num=m-a[i];
	while(left<right)
	{
		int mid=(left+right)/2;
		if(a[mid]==num&&a[mid-1]!=num)
		{
			return mid;
		}
		else if(a[mid]<num)
		left=mid+1;
		else
		right=mid;
	}
	if(a[left]!=num)
	return -1;
	else
	return left;
}
int main()
{
	int ans;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	for(int i=0;a[i]<=m/2;i++)
	{
		ans=find(i);
		if(ans>0)
		{
			cout<<a[i]<<" "<<a[ans];
			break;
		}
	}
	if(ans==-1)
	cout<<"No Solution";
	return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
int p;
bool cmp(int M,int m)
{
	return M<=m*p; 
}
int main()
{
	int n,num[100001],left=0,right,ans=0;
	cin>>n>>p;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	sort(num,num+n);
	for(;left<n;left++)
	{
		right=n-1;
		while(left<right)
		{
			if(cmp(num[right],num[left])==true)
			{
				if(right-left+1>ans)
				ans=right-left+1;
				break;
			}
			else
			right--;
		}
	}
	cout<<ans;
	return 0;
}

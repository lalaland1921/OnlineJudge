#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int n,k,p,maxfact;
vector<int> ans,temp,po;
void init()
{
	int i=0,temp=0;
	while(temp<=n)
	{
		po.push_back(temp);
		temp=pow(i,p);
	}
}
/*bool cmp()
{
	for(int i=k-1;i>=0;i--)
	{
		if(temp[i]>ans[i])
		return true;
		else if(temp[i]==ans[i]);
		else
		return false;
	}
}*/
void DFS(int index,int powsum,int factsum)
{
	if(powsum>n)
	return;
	else if(temp.size()==k)
	{
		if(powsum==n)
		{
			if(factsum>maxfact)
			{
				ans=temp;
				maxfact=factsum;
			}
		}
	}
	else if(index>=1)
	{
		temp.push_back(index);
		DFS(index,powsum+po[index],factsum+index);
		temp.pop_back();
		DFS(index-1,powsum,factsum);
	}
	else;
	return;
}
int main()
{
	scanf("%d%d%d",&n,&k,&p);
	init();
	DFS(po.size()-1,0,0);
	if(ans.size()<k)
	printf("Impossible");
	else
	{
		printf("%d=",n);
		for(int i=0;i<n;i++)
		{
			printf("%d^%d",ans[i],p);
			if(i!=n-1)
			printf("+");
		}
	}
	return 0;
}


#include <cstdio>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
const int nmax=100010;
int n;
double p,r,ans=0;
vector<double> price;
void init()
{
	double temp=p;
	price.clear();
	for(int i=0;i<n;i++)
	{
		price.push_back(temp);
		temp*=(1+r/100);
	}
}
struct Node
{
	int product;
	vector<int> child;
}tree[nmax];
void DFS(int root,int lay)
{
	if(tree[root].child.size()==0)
	{
		ans+=tree[root].product*price[lay];
		return;
	}
	else
	for(int i=0;i<tree[root].child.size();i++)
	{
		DFS(tree[root].child[i],lay+1);
	}
		
}
int main()
{
	scanf("%d%lf%lf",&n,&p,&r);
	for(int i=0;i<n;i++)
	{
		int num,ch;
		scanf("%d",&num);
		tree[i].child.clear();
		if(num>0)
		{
			for(int j=0;j<num;j++)
			{
				scanf("%d",&ch);
				tree[i].child.push_back(ch);
			}
			tree[i].product=0;
		}
		else
		{
			scanf("%d",&ch);
			tree[i].product=ch;
		}
	}
	init();
	DFS(0,0);
	printf("%.1f",ans);
	return 0;
}


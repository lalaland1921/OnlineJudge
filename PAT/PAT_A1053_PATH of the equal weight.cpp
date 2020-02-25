#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
const int nmax=110;
int s,num=0;
struct Node
{
	vector<int> child;
	int weight;
}node[nmax];
vector<int> path;
void DFS(int index,int sum,int nodenum)
{
	
	sum+=node[index].weight;
	path.push_back(index);
	nodenum++;
	if(node[index].child.empty())
	{
		if(sum==s)
		{
			num++;
			for(int i=0;i<nodenum;i++)
			{
				printf("%d",path[i]);
				if(i!=nodenum-1)
				printf(" ");
				else
				printf("\n");
			}
		}
	}
	else
	{
		for(int i=0;i<node[index].child.size();i++)
		{
			DFS(node[index].child[i],sum,nodenum);
		}
	}
}
bool cmp(int a,int b)
{
	return node[a].weight>node[b].weight;
}
int main()
{
	int n,m,k,p,c;
	scanf("%d%d%d",&n,&m,&s);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&node[i].weight);
	}
	while(m--)
	{
		scanf("%d%d",&p,&k);
		for(int i=0;i<k;i++)
		{
			scanf("%d",&c);
			node[p].child.push_back(c);
		}
		sort(node[p].child.begin(),node[p].child.end(),cmp);
	}
	DFS(0,0,0);
	return 0;
}

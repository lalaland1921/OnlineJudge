#include <cstdio>
#include <vector>
using namespace std;
const int nmax=110;
int num[nmax]={0},count=0;
struct Node
{
	vector<int> child;
}node[nmax];
void DFS(int index,int level)
{
	if(node[index].child.empty())
	{
		num[level]++;
		if(level>count)
		count=level;
	}
	else
	{
		for(int i=0;i<node[index].child.size();i++)
		{
			DFS(node[index].child[i],level+1);
		}
	}
	return;
}
int main()
{
	int n,m,s,k,child;
	scanf("%d%d",&n,&m);
	while(m--)
	{
		scanf("%d%d",&s,&k);
		while(k--)
		{
			scanf("%d",&child);
			node[s].child.push_back(child);
		}
	}
	DFS(1,0);
	for(int i=0;i<=count;i++)
	{
		printf("%d",num[i]);
		if(i<count)
		printf(" ");
		else
		printf("\n");
	}
	return 0;
}

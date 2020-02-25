#include <cstdio>
#include <vector>
using namespace std;
const int nmax=110;
struct Node
{
	vector<int> child;
}node[nmax];
int num[nmax]={0};
void BFS(int index,int gene)
{
	gene++;
	num[gene]++;
	if(node[index].child.empty())
	return;
	else
	{
		for(int i=0;i<node[index].child.size();i++)
		BFS(node[index].child[i],gene);
	}
	return;
}
int findmax()
{
	int i=1,ans=1;
	while(num[i]>0)
	{
		if(num[i]>num[ans])
		ans=i;
		i++;
	}
	return ans;
}
int main()
{
	int n,m,k,now,c;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d%d",&now,&k);
		for(int j=0;j<k;j++)
		{
			scanf("%d",&c);
			node[now].child.push_back(c);
		}
	}
	BFS(1,0);
	int ans=findmax();
	printf("%d %d\n",num[ans],ans);
	return 0;
}

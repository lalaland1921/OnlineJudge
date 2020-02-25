#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
struct Node
{
	int weight,childnum;
	vector<int> child;
}node[110];
bool cmp(int a,int b)
{
	return node[a].weight>node[b].weight;
}
int v[110];
int n,m,s;
void DFS(int now,int num,int sum)
{
	num++;
	v[num-1]=node[now].weight;
	sum+=v[num-1];
	if(sum>s)
	return;
	if(node[now].childnum==0)
	{
		if(sum==s)
		{
			for(int i=0;i<num;i++)
			{
				printf("%d",v[i]);
				if(i<num-1)
				printf(" ");
				else
				printf("\n");
			}
		}
		else
		return;
	}
	else
	{
		int count=node[now].childnum;
		for(int i=0;i<count;i++)
		{
			DFS(node[now].child[i],num,sum);
		}
	}
	return;
}
int main()
{
	int id1,k,id2;
	scanf("%d%d%d",&n,&m,&s);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&node[i].weight);
		node[i].childnum=0;
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d%d",&id1,&k);
		node[id1].childnum=k;
		for(int j=0;j<k;j++)
		{
			scanf("%d",&id2);
			node[id1].child.push_back(id2);
		}
		sort(node[id1].child.begin(),node[id1].child.end(),cmp);
	}
	DFS(0,0,0);
	return 0;
}

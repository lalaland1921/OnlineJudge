#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
const int nmax=100010;
struct Node
{
	vector<int> child;
}node[nmax];
int num=0,ans=0;
void DFS(int deep,int now)
{
	if(!node[now].child.empty())
	{
		for(int i=0;i<node[now].child.size();i++)
		DFS(deep+1,node[now].child[i]);
	}
	else
	{
		if(deep==ans)
		num++;
		else if(deep>ans)
		{
			num=1;
			ans=deep;
		}
		else;
	}
	return;
}
int main()
{
	double p,r;
	int n,s,h;
	scanf("%d%lf%lf",&n,&p,&r);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&s);
		if(s==-1)
		h=i;
		else
		node[s].child.push_back(i);	
	}
	DFS(0,h);
	p=p*pow(1+r/100,ans);
	printf("%.2f %d\n",p,num);
	return 0;
}

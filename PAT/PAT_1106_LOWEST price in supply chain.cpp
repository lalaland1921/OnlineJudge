#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
const int nmax=100010;
struct Node
{
	vector<int>child;
}node[nmax];
int ans=nmax,num=0;
void DFS(int index,int level)
{
	if(node[index].child.empty())
	{
		if(level<ans)
		{
			ans=level;
			num=1;
		}
		else if(level==ans)
		num++;
		else;
	}
	else
	{
		for(int i=0;i<node[index].child.size();i++)
		DFS(node[index].child[i],level+1);
	}
	return;	
}
int main()
{
	int n,k,c;
	double p,r;
	scanf("%d%lf%lf",&n,&p,&r);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&k);
		while(k--)
		{
			scanf("%d",&c);
			node[i].child.push_back(c);
		}
	}
	DFS(0,0);
	p=p*pow(1.0+r/100,ans);
	printf("%.4f %d\n",p,num);
	return 0;
}

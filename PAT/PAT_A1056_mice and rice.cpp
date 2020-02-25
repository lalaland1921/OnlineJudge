#include <cstdio>
#include <queue> 
using namespace std;
const int nmax=1010;
struct mouse
{
	int weight,rank; 
}mouse[nmax];
queue<int> q;
int main()
{
	int np,ng;
	scanf("%d%d",&np,&ng);
	for(int i=0;i<np;i++)
	{
		scanf("%d",&mouse[i].weight);
	}
	for(int i=0;i<np;i++)
	{
		int order;
		scanf("%d",&order);
		q.push(order);
	}
	while(q.size()>1)
	{
		int group=(q.size()-1)/ng+1,s=q.size(),num=0;
		for(int i=1;i<=group;i++)
		{
			int k=q.front();
			for(int j=0;j<ng;j++)
			{
				if(num==s)
				break;
				if(mouse[q.front()].weight>mouse[k].weight)
				k=q.front();
				mouse[q.front()].rank=group+1;
				q.pop();
				num++;
			}
			q.push(k);
		}
	}
	mouse[q.front()].rank=1;
	for(int i=0;i<np;i++)
	{
		printf("%d",mouse[i].rank);
		if(i!=np-1)
		printf(" ");
	}
	return 0;
}

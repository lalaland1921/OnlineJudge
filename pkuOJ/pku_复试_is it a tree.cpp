#include <stdio.h>
#include <queue>
using namespace std;
int main()
{
	int c=1,n1,n2;
	while(scanf("%d %d",&n1,&n2)&&n1!=-1&&n2!=-1)//若是-1-1则说明结束 
	{
		if(n1==0&&n2==0)//若是0 0则输出是一棵树 
		{
			printf("Case %d is a tree.\n",c++);
			continue;
		}
		int exist[10001]={0},vis[10001]={0},edge[10001][10001],isroot[10001]={0},maxn=0;//初始化变量 
		bool flag=true;
		exist[n1]=exist[n2]=1;
		edge[n1][n2]=1;
		maxn=max(n1,n2);
		while(scanf("%d %d",&n1,&n2)&&n1!=0&&n2!=0)//继续输入其他边 
		{
			exist[n1]=exist[n2]=1;
			edge[n1][n2]=1;
			isroot[n2]=1;
			maxn=max(n1,n2);
		}
		int root=0;
		while(root<=maxn&&(isroot[root]==1||exist[root]==0))//找到根结点 
		root++;
		if(root==0)//若未找到则不是树 
		flag=false;
		else//若找到则继续判断，用层序遍历进行判断 
		{
			queue<int> q;
			q.push(root);
			int p;
			while(!q.empty())
			{
				p=q.front();
				q.pop();
				if(vis[p]==1)//若现在访问的结点已经被访问过说明不是树 
				{
					flag=false;
					break;
				}
				vis[p]=1;
				for(int i=1;i<=maxn;i++)
				{
					if(edge[p][i])
					q.push(i);
				}
			}
			if(flag==true)//继续判断，找出层序遍历未访问到的结点，若找到则不是树 
			{
				for(int i=1;i<=maxn;i++)
				{
					if(exist[i]==1&&vis[i]==0)
					{
						flag=false;
						break;
					}
				}
			}
		}
		if(flag==true)
		printf("Case %d is a tree.\n",c);
		else
		printf("Case %d is not a tree.\n",c);
		c++;
	}
	return 0;
}

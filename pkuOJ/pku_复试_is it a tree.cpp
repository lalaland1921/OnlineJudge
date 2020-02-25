#include <stdio.h>
#include <queue>
using namespace std;
int main()
{
	int c=1,n1,n2;
	while(scanf("%d %d",&n1,&n2)&&n1!=-1&&n2!=-1)//����-1-1��˵������ 
	{
		if(n1==0&&n2==0)//����0 0�������һ���� 
		{
			printf("Case %d is a tree.\n",c++);
			continue;
		}
		int exist[10001]={0},vis[10001]={0},edge[10001][10001],isroot[10001]={0},maxn=0;//��ʼ������ 
		bool flag=true;
		exist[n1]=exist[n2]=1;
		edge[n1][n2]=1;
		maxn=max(n1,n2);
		while(scanf("%d %d",&n1,&n2)&&n1!=0&&n2!=0)//�������������� 
		{
			exist[n1]=exist[n2]=1;
			edge[n1][n2]=1;
			isroot[n2]=1;
			maxn=max(n1,n2);
		}
		int root=0;
		while(root<=maxn&&(isroot[root]==1||exist[root]==0))//�ҵ������ 
		root++;
		if(root==0)//��δ�ҵ������� 
		flag=false;
		else//���ҵ�������жϣ��ò�����������ж� 
		{
			queue<int> q;
			q.push(root);
			int p;
			while(!q.empty())
			{
				p=q.front();
				q.pop();
				if(vis[p]==1)//�����ڷ��ʵĽ���Ѿ������ʹ�˵�������� 
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
			if(flag==true)//�����жϣ��ҳ��������δ���ʵ��Ľ�㣬���ҵ������� 
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

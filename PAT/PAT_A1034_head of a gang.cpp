#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
const int nmax=26*26*26;
struct Gang
{
	int head,num;
	Gang(int _head,int _num):
	head(_head),num(_num){}//构造函数 
};
vector <Gang> gang;
vector <int> p; 
vector <int> g[nmax];
int weight[nmax][nmax],headweight[nmax+1]={0};//每个路径权重，每个节点分别的总权重 
int k,sum,head,num;//用全局变量记录深度，一个团体的总权重，和首领 
bool exist[nmax]={false},vis[nmax]={false};
int change(char a[])//用散列表记录名称 
{
	return (a[0]-'A')*26*26+(a[1]-'A')*26+a[2]-'A';
}
void show(int a)//打印数字对应的字母 
{
	char ch;
	ch=a/(26*26)+'A';
	printf("%c",ch);
	ch=(a%(26*26)/26)+'A';
	printf("%c",ch);
	ch=a%26;
	printf("%c",ch);	
}
void DFS(int a) 
{
	for(int i=0;i<g[a].size();i++)
	{
		if(vis[g[a][i]]==false)
		{
			vis[g[a][i]]=true;
			num++;
			if(headweight[g[a][i]]>headweight[head])
			head=g[a][i];
			sum+=weight[a][g[a][i]];
			DFS(a);
		}
	}
}
void gDFS()
{
	for(int i=0;i<p.size();i++)
	{
		num=1,sum=0;
		if(vis[p[i]]==false)
		{
			head=p[i];
			vis[p[i]]=true;
			DFS(p[i]);
			if(sum>k&&num>2)
			{
				gang.push_back(Gang(head,num));
			}
		}
	}
}
bool cmp(Gang a,Gang b)
{
	return a.head<b.head;
}
int main()
{
	int n,p1,p2,w;
	char ch1[3],ch2[3];
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%s %s %d",ch1,ch2,&w);
		p1=change(ch1);//这里可用函数，两层循环 
		p2=change(ch2);
		g[p1].push_back(p2);
		g[p2].push_back(p1);
		weight[p1][p2]+=w;
		weight[p2][p1]+=w;
		headweight[p1]+=w;
		headweight[p2]+=w;
		if(exist[p1]==false)
		{
			exist[p1]=true;
			p.push_back(p1);
		}
		if(exist[p2]==false)
		{
			exist[p2]=true;
			p.push_back(p2);
		}
	}
	gDFS();
	num=gang.size();
	printf("%d\n",num);
	sort(gang.begin(),gang.end(),cmp);//按字典序排列 
	for(int i=0;i<num;i++)
	{
		show(gang[i].head);
		printf(" %d",gang[i].num);
	}
	return 0;
}


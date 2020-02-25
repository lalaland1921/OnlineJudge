#include <cstdio>
#include <cmath>
using namespace std;
struct Node
{
	float x,y;
}node[101];
float cal(double x1,double y1,double x2,double y2)
{
	double d;
	d=sqrt((x1-x2)^2+(y1-y2)^2);
	return d;
}
int main()
{
	int n,vis[101]={0};
	double dest[101][101],ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%f %f",&node[i].x,&node[i].y);
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		dest[i][j]=dest[j][i]=cal(node[i].x,node[i].y,node[j].x,node[j].y);
	}
	vis[0]=1;
	int now=0,temp;
	double mind;
	while(true)
	{
		mind=100000;
		temp=-1;
		for(int i=0;i<n;i++)
		{
			if(vis[i]==0&&dest[now][i]<mind&&i!=now)
			{
				mind=dest[now][i];
				temp=i;
			}
		}
		ans+=mind;
		if(temp==-1)
		break;
		vis[temp]=1;
		now=temp;
	}
	printf("%.2lf",ans);
	return 0;
}

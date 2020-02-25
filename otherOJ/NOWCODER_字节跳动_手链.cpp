#include <cstdio>
struct Ball
{
	int num,color[51];
}ball[10001];
int main()
{
	int n,m,c,col[51]={0},num=0;
	bool flag=true,ans[51]={false};
	scanf("%d %d %d",&n,&m,&c);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&ball[i].num);
		for(int j=1;j<=ball[i].num;j++)
		{
			scanf("%d",&ball[i].color[j]);
			if((i-col[ball[i].color[j]])%n<m)
			ans[ball[i].color[j]]=true;
			col[ball[i].color[j]]=i;
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=ball[i].num;j++)
		{
			if((i-col[ball[i].color[j]])%n<m)
			ans[ball[i].color[j]]=true;
			col[ball[i].color[j]]=i;
		}
	}
	for(int i=1;i<=50;i++)
	{
		if(ans[i]==true)
		num++;
	}
	printf("%d",num);
	return 0;
}

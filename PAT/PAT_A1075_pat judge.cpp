#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct student
{
	int totscore,s[5],num,id,flag;
}stu[10010];
void init()
{
	for(int i=0;i<10010;i++)
	{
		stu[i].totscore=0;
		stu[i].num=0;
		stu[i].id=i+1;
		stu[i].flag=0;
		memset(stu[i].s,-1,sizeof(stu[i].s));
	}
}
bool cmp(student a,student b)
{
	if(a.flag!=b.flag)
	return a.flag>b.flag;
	else if(a.totscore!=b.totscore)
	return a.totscore>b.totscore;
	else if(a.num!=b.num)
	return a.num>b.num;
	else
	return a.id<b.id;	
}
int main()
{
	int n,k,m,fullscore[5];
	init();
	cin>>n>>k>>m;
	for(int i=0;i<k;i++)
	{
		cin>>fullscore[i];
	}
	for(int i=0;i<m;i++)
	{
		int id,pro_id,pars;
		scanf("%d %d %d",&id,&pro_id,&pars);
		if(pars>=0)
		{
			stu[id-1].flag=1;
			if(pars>stu[id-1].s[pro_id-1])
			stu[id-1].s[pro_id-1]=pars;
			if(pars==fullscore[pro_id-1])
			stu[id-1].num++;
		}
		else if(stu[id-1].s[pro_id]==-1)//×¢ÒâÕâ¸ö 
		stu[id-1].s[pro_id-1]=0;
	}
	for(int id=0;id<n;id++)
	{
		for(int i=0;i<k;i++)
		{
			if(stu[id].s[i]>=0)
			{
				stu[id].totscore+=stu[id].s[i];
			}
		}
	}
	sort(stu,stu+n,cmp);
	int r=1;
	for(int i=0;i<n&&stu[i].flag==1;i++)
	{
		if(i>0&&stu[i].totscore!=stu[i-1].totscore)
		r=i+1;
		printf("%d %05d %d",r,stu[i].id,stu[i].totscore);
		for(int j=0;j<k;j++)
		{
			if(stu[i].s[j]>=0)
			printf(" %d",stu[i].s[j]);
			else
			printf(" -");
		}
		printf("\n");	
	}
}

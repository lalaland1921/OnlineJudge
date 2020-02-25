#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int now;
char course[4]={'A','C','M','E'};
struct student
{
	int id,grade[4];
}stu[2010];
bool cmp(student a,student b)
{
	return a.grade[now]>b.grade[now];
}
int main()
{
	int n,m,rank[1000000][4]={0},query;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].id>>stu[i].grade[1]>>stu[i].grade[2]>>stu[i].grade[3];
		stu[i].grade[0]=round((stu[i].grade[1]+stu[i].grade[2]+stu[i].grade[3])/3.0)+0.5;
	}
	for(now=0;now<4;now++)
	{
		sort(stu,stu+n,cmp);
		rank[stu[0].id][now]=1;
		for(int i=1;i<n;i++)
		{
			if(stu[i].grade[now]==stu[i-1].grade[now])
			rank[stu[i].id][now]=rank[stu[i-1].id][now];
			else
			rank[stu[i].id][now]=i+1;
		}
	}
	for(int i=0;i<m;i++)
	{
		cin>>query;
		if(rank[query][0]==0)
		cout<<"N/A\n";
		else
		{
			int ans=0;
			for(int j=1;j<4;j++)
			{
				if(rank[query][j]<rank[query][ans])
				ans=j;
			}
			cout<<rank[query][ans]<<" "<<course[ans]<<endl;
		}
	}
	return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
struct student
{
	int id,ge,gi,s[6],final,admit,rank;
}stu[40010];
bool cmp1(student a,student b)
{
	if(a.final!=b.final)
	return a.final>b.final;
	else if(a.ge!=b.ge)
	return a.ge>b.ge;
	else
	return a.id<b.id;
}
bool cmp2(student a,student b)
{
	if(a.admit!=b.admit)
	return a.admit<b.admit;
	else
	return a.id<b.id;
}
int main()
{
	int n,m,k,quota[101];
	cin>>n>>m>>k;
	for(int i=0;i<m;i++)
	{
		cin>>quota[i];
	}
	for(int i=0;i<n;i++)
	{
		stu[i].id=i;
		stu[i].admit=101;
		scanf("%d %d",&stu[i].ge,&stu[i].gi);
		for(int j=0;j<k;j++)
		scanf("%d",&stu[i].s[j]);
		stu[i].final=stu[i].ge+stu[i].gi;
	}
	sort(stu,stu+n,cmp1);
	int r=1;
	for(int i=0;i<n;i++)
	{
		if(i>0&&(stu[i].final!=stu[i-1].final||stu[i].final==stu[i-1].final&&stu[i].ge!=stu[i-1].ge))
		r=i+1;
		stu[i].rank=r;
		for(int j=0;j<k&&stu[i].admit==101;j++)
		{
			if(quota[stu[i].s[j]]>0)
			{
				stu[i].admit=stu[i].s[j];
				quota[stu[i].s[j]]--;
			}
			else
			for(int k=i;stu[k].rank==stu[i].rank&&stu[i].admit==101;k--)
			{
			 	if(stu[k].admit==stu[i].s[j])
				{
					stu[i].admit=stu[i].s[j];
				}
			 }
		}
	}
	sort(stu,stu+n,cmp2);
	int count=0;
	for(int i=0;i<m;i++)
	{
		int j=0;
		while(stu[count].admit==i)
		{
			if(j>0)	
			printf(" ");
			printf("%d",stu[count].id);
			j++;
			count++;
		}
		printf("\n");
	}
}

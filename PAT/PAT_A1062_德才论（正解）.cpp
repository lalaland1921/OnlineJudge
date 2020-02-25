#include <iostream>
#include <algorithm>
using namespace std;
struct student
{
	int de,cai,sum,flag;
	long long num;
}stu[100010];
bool cmp(student a,student b)
{
	if(a.flag!=b.flag)
	return a.flag<b.flag;
	else if(a.sum!=b.sum)
	return a.sum>b.sum;
	else if(a.de!=b.de)
	return a.de>b.de;
	else return a.num<b.num;
}
int main()
{
	int n,l,h,m=0,de,cai;
	long long num;
	cin>>n>>l>>h;
	for(int i=0;i<n;i++)
	{
		scanf("%lld %d %d",&num,&de,&cai);
		if(de>=l&&cai>=l)
		{
			stu[m].num=num;
			stu[m].de=de;
			stu[m].cai=cai;
			stu[m].sum=de+cai;
			m++;
		stu[m].sum=stu[m].de+stu[m].cai;
		if(stu[m].de>=h&&stu[m].cai>=h)
		stu[m].flag=1;
		else if(stu[m].de>=h)
		stu[m].flag=2;
		else if(stu[m].de>=stu[m].cai)
		stu[m].flag=3;
		else
		stu[m].flag=4;
		}
	}
	sort(stu,stu+m,cmp);
	cout<<m<<endl;
	for(int i=0;i<m;i++)
	{
		printf("%lld %d %d\n",stu[i].num,stu[i].de,stu[i].cai);
	}
	return 0;
}

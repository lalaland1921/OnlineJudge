#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct student
{
	char name[9];
	int age,net_worth;
}stu[100010];
bool cmp1(student a,student b)
{
	if(a.age!=b.age)
	return a.age<b.age;
	else if(a.net_worth!=b.net_worth)
	return a.net_worth>b.net_worth;
	else
	return strcmp(a.name,b.name)<0;
}
bool cmp2(student a,student b)
{
	if(a.net_worth!=b.net_worth)
	return a.net_worth>b.net_worth;
	else if(a.age!=b.age)
	return a.age<b.age;
	else
	return strcmp(a.name,b.name)<0;	
}
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		scanf("%s %d %d\n",&stu[i].name,&stu[i].age,&stu[i].net_worth);
	}
	sort(stu,stu+n,cmp1);
	for(int i=1;i<=k;i++)
	{
		int m,amin,amax,count=0,j,num;
		scanf("%d %d %d",&m,&amin,&amax);
		cout<<"Case #"<<i<<":"<<endl;
		for(j=0;j<n;j++)
		{
			if(stu[j].age>=amin&&stu[j].age<=amax);
			count++;
			if(stu[j].age>amax)
			break;
		}
		num=min(count,m);
		if(num==0)
		printf("None\n");
		else
		{
			sort(stu+j-count,stu+j,cmp2);
			for(int h=j-count;h<j-count+num;h++)
			printf("%s %d %d\n",stu[h].name,stu[h].age,stu[h].net_worth);
		}
		sort(stu+j-count,stu+j,cmp1);		
	}
	return 0;
}

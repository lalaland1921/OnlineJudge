#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct student
{
	char name[11],id[11];
	int grade;
}stu[110];
bool cmp(student a,student b)
{
	return a.grade>b.grade;
}
int main()
{
	int n,grade1,grade2,flag=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%s %s %d",&stu[i].name,&stu[i].id,&stu[i].grade);
	}
	cin>>grade1>>grade2;
	sort(stu,stu+n,cmp);
	for(int i=0;i<n&&stu[i].grade<=grade2;i++)
	{
		if(stu[i].grade>=grade1&&stu[i].grade<=grade2)
		{
			flag=1;
			printf("%s %s\n",stu[i].name,stu[i].id);
		}
	}
	if(flag==0)
	cout<<"NONE\n";
	return 0;
}

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct student
{
	char str[3][9];
}stu[100010];
int c;
bool cmp(student a,student b)
{
	if(strcmp(a.str[c],b.str[c])!=0)
	return strcmp(a.str[c],b.str[c])<0;
	else
	return strcmp(a.str[0],b.str[0])<0;
}
int main()
{
	int n;
	cin>>n>>c;
	for(int i=0;i<n;i++)
	{
		scanf("%s %s %s",&stu[i].str[0],&stu[i].str[1],&stu[i].str[2]);
	}
	c--;
	sort(stu,stu+n,cmp);
	for(int i=0;i<n;i++)
	{
		printf("%s %s %s\n",stu[i].str[0],stu[i].str[1],stu[i].str[2]);
	}
	return 0;
}

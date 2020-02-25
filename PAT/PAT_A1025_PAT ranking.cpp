#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct student
{
	char num[14];
	int score,frank,loc,lrank;
}stu[30000];
bool cmp(student a,student b)
{
	if(a.score!=b.score)
	return a.score>b.score;
	else
	return strcmp(a.num,b.num)<0;
}
int main()
{
	int n,k,count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>k;
		for(int j=0;j<k;j++)
		{
			cin>>stu[count].num>>stu[count].score;
			stu[count].loc=i+1;
			count++;
		}
		sort(stu+count-k,stu+count,cmp);
		stu[count-k].lrank=1;
		for(int j=count-k+1;j<count;j++)
		{
			if(stu[j].score==stu[j-1].score)
			stu[j].lrank=stu[j-1].lrank;
			else
			stu[j].lrank=j-count+k+1;
		}
	}
	cout<<count<<endl;
	sort(stu,stu+count,cmp);
	stu[0].frank=1;
	cout<<stu[0].num<<" "<<stu[0].frank<<" "<<stu[0].loc<<" "<<stu[0].lrank<<endl;
	for(int i=1;i<count;i++)
	{
		if(stu[i].score==stu[i-1].score)
		stu[i].frank=stu[i-1].frank;
		else
		stu[i].frank=i+1;
		cout<<stu[i].num<<" "<<stu[i].frank<<" "<<stu[i].loc<<" "<<stu[i].lrank<<endl;
	}
	return 0;
}

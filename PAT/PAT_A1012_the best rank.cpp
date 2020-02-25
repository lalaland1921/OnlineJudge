#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
char course[4]={'A','C','M','E'};
struct student
{
	int id;
	int a[4],b[4];
}stu[2010];
bool cmp0(student x,student y)
{
	if(x.a[0]!=y.a[0])
	return x.a[0]>y.a[0];
	else
	return x.id<y.id;
}
bool cmp1(student x,student y)
{
	if(x.a[1]!=y.a[1])
	return x.a[1]>y.a[1];
	else
	return x.id<y.id;
}
bool cmp2(student x,student y)
{
	if(x.a[2]!=y.a[2])
	return x.a[2]>y.a[2];
	else
	return x.id<y.id;
}
bool cmp3(student x,student y)
{
	if(x.a[3]!=y.a[3])
	return x.a[3]>y.a[3];
	else
	return x.id<y.id;
}
int cmp4(student x)
{
	int k=0;
	for(int i=1;i<4;i++)
	{
		if(x.b[i]<x.b[k])
		k=i;
	}
	return k;
}
int main()
{
	int n,m,id,key[1000000]={-1};
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].id>>stu[i].a[1]>>stu[i].a[2]>>stu[i].a[3];
		stu[i].a[0]=(stu[i].a[1]+stu[i].a[2]+stu[i].a[3])/3;
	}
	sort(stu,stu+n,cmp0);
	stu[0].b[0]=1;
	for(int i=1;i<n;i++)
	{
		if(stu[i].a[0]==stu[i-1].a[0])
		stu[i].b[0]=stu[i-1].b[0];
		else
		stu[i].b[0]=i+1;
	}
	sort(stu,stu+n,cmp1);
	stu[0].b[1]=1;
	for(int i=1;i<n;i++)
	{
		if(stu[i].a[1]==stu[i-1].a[1])
		stu[i].b[1]=stu[i-1].b[1];
		else
		stu[i].b[1]=i+1;
	}
	sort(stu,stu+n,cmp2);
	stu[0].b[2]=1;
	for(int i=1;i<n;i++)
	{
		if(stu[i].a[2]==stu[i-1].a[2])
		stu[i].b[2]=stu[i-1].b[2];
		else
		stu[i].b[2]=i+1;
	}
	sort(stu,stu+n,cmp3);
	for(int i=0;i<n;i++)
	{
		if(stu[i].a[3]==stu[i-1].a[3])
		stu[i].b[3]=stu[i-1].b[3];
		else
		stu[i].b[3]=i+1;
		key[stu[i].id]=cmp4(stu[i]);
	}
	for(int i=0;i<m;i++)
	{
		cin>>id;
		if(key[id]==-1)
		cout<<"N/A"<<endl;
		else
		cout<<
	}
	return 0;
}

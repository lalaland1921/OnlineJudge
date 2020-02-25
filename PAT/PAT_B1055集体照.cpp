#include <cstdio>
#include <algorithm>
#include<malloc.h> 
using namespace std;
struct Student
{
	int height;
	char name[8];
}stu[10001];
bool cmp(Student a,Student b)
{
	if(a.height==b.height)
	return a.name>b.name; 
	return a.height>b.height;
}
int main()
{
	int n,k,r,right,left,*a;
	scanf("%d %d",&n,&k);
	r=n/k;
	a=(int*)malloc((r+n%r)*sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%s %d",&stu[i].name,&stu[i].height);
	}
	sort(stu,stu+n,cmp);
	for(right=0;right<n;)
	{
		if(right!=0)
		left=right+r-1<n-1?right+r-1:n-1;
		else
		left=r+n%r-1;
		sort(stu+right,stu+left+1,cmp);
		int len=left-right+1;
		int i=len/2,j=len/2-1,k=right;
		for(k;k<=left;)
		{
			a[i++]=k++;
			if(k<=left)
			a[j--]=k++;
		}
		for(i=0;i<len;i++)
		{
			if(i>0)
			printf(" ");
			printf("%s",stu[a[i]].name);
		}
		printf("\n");
		right=left+1;
		left+=r;
	}
	free(a);
	return 0;
}

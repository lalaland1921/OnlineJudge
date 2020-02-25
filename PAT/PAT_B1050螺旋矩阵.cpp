#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
const int nmax=10000,mmax=100;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int N,a[nmax][mmax]={0},b[nmax];
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&b[i]);
	}
	sort(b,b+N,cmp);
	int n=sqrt(N),m;
	while(N%(n--)!=0);
	n++;
	m=N/n;
	int p=0,i=0,j=0;
	while(p<N)
	{
		for(;j<n;j++)
		{
			if(a[i][j]==0)
			a[i][j]=b[p++];
			if(a[i][j+1]!=0)
			break; 
		}
		for(;i<n;i++)
		{
			if(a[i][j]==0)
			a[i][j]=b[p++];
			if(a[i+1][j]!=0)
			break;
		}
		for(;j<n;j--)
		{
			if(a[i][j]==0)
			a[i][j]=b[p++];
			if(a[i][j-1]!=0)
			break; 
		}
		for(;i<n;i--)
		{
			if(a[i][j]==0)
			a[i][j]=b[p++];
			if(a[i-1][j]!=0)
			break;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j!=0)
			printf(" ");
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


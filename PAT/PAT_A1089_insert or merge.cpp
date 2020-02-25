#include <iostream>
#include <algorithm>
using namespace std;
int n,a[101],b[101],c[101],d[101];
bool cmp(int a[],int b[])
{
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			return false;
		}
	}
	return true;
}
void print(int a[])
{
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if(i!=n-1)
		cout<<" ";
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		c[i]=a[i];
		d[i]=a[i];
	}
	for(int i=0;i<n;i++)
	cin>>b[i];
	int i=1;
	do
	{
		sort(c,c+i+1);
		i++;
	}while(cmp(b,c)==false&&i<n);
	if(i<n)
	{
		sort(c,c+i+2);
		cout<<"Insert Sort"<<endl;
		print(c);
	}
	else
	{
		int i=1;
		do
		{
			i*=2;
			for(int j=1;j<=n/i;j++)
			sort(d+i*(j-1),d+min(i*j,n));			
		}while(cmp(b,d)==false);
		cout<<"Merge Sort\n";
		i*=2;
		for(int j=1;j<=n/i+1;j++)
		sort(d+i*(j-1),d+min(i*j,n));
		print(d);
	}
	return 0;
}

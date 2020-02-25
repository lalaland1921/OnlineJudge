#include <iostream>
using namespace std;
int main()
{
	int n,m,sum=0,p1,p2,a[100005],b[10005]; //**p,*q;
	cin>>n;
	/*p=new int[n];
	for(int i;i<n;i++)
	{
		cin>>p[i];
		sum+=p[i];
	}
	cin>>m;
	q=new int*[m];
	for(int i=0;i<m;i++)
	{
		q[i]=new int[3];
	}*/
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>p1>>p2;
		int temp;
		if(p2<p1)
		{
			temp=p2;
			p2=p1;
			p1=temp;
		}
		b[i]=0;
		for(int j=p1;j<p2;j++)
		{
			b[i]+=a[j-1];
		}
		if(b[i]>(sum-b[i]))
		b[i]=sum-b[i];		
	}
	for(int i =0;i<m;i++)
	{
		cout<<b[i]<<endl;
	}
	return 0;
}

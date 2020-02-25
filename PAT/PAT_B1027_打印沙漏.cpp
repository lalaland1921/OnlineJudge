#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m,n;
	char ch;
	cin>>n>>ch;
	m=(sqrt(2+2*n)-2)/2;
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<i;j++)
		cout<<" ";
		for(int k=0;k<2*m+1-2*i;k++)
		cout<<ch;
		cout<<"\n";
	}
	for(int i=m-1;i>=0;i--)
	{
		for(int j=0;j<i;j++)
		cout<<" ";
		for(int k=0;k<2*m+1-2*i;k++)
		cout<<ch;
		cout<<"\n";
	}
	cout<<n-(2*m*m+4*m+1)<<endl;
	return 0;
}

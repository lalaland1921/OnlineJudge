#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int main()
{
	int n=0,n1,n2;
	char a[81];
	cin>>a;
	n=strlen(a);
	n1=min((n-1)/2,(n+2)/3);
	n2=n+2-2*n1;
	for(int i=0;i<n1-1;i++)
	{
		cout<<a[i];
		for(int j=0;j<n2-2;j++)
		cout<<" ";
		cout<<a[n-1-i]<<endl;
	}
	for(int i=n1-1;i<n1+n2-1;i++)
	{
		cout<<a[i];
	}
	return 0;
}

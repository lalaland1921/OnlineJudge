#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,h;
	char ch;
	cin>>n;
	cin>>ch;
	h=(int)round(1.0*n/2);
	for(int i=0;i<n;i++)
	cout<<ch;
	cout<<"\n";
	for(int i=1;i<h-1;i++)
	{
		cout<<ch;
		for(int j=1;j<n-1;j++)
		cout<<" ";
		cout<<ch<<endl;
	}
	for(int i=0;i<n;i++)
	cout<<ch;
	return 0;
}

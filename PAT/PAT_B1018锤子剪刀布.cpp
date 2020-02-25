#include <iostream>
using namespace std;
main()
{
	int n,a[3]={0},b[3]={0},wa[3]={0},wb[3]={0},ka=0,kb=0;
	char a1,b1,x[3]={'B','C','J'};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a1>>b1;
		if(a1==b1)
		{
			a[1]++;
			b[1]++;
		}
		else if(a1=='C'&&b1=='J')
		{
			a[0]++;
			wa[1]++;
		}
		else if(a1=='J'&&b1=='B')
		{
			a[0]++;
			wa[2]++;
		}
		else if(a1=='B'&&b1=='C')
		{
			a[0]++;
			wa[0]++;
		}
		else if(a1=='C'&&b1=='B')
		{
			a[2]++;
			wb[0]++;
		}
		else if(a1=='B'&&b1=='J')	
		{
			a[2]++;
			wb[2]++;
		}
		else
		{
			a[2]++;
			wb[1]++;
		}
	}
	for(int i=0;i<3;i++)
	{
		if(wa[i]>wa[ka])
		ka=i;
		else;
		if(wb[i]>wb[kb])
		kb=i;
		else;
	}
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
	cout<<a[2]<<" "<<a[1]<<" "<<a[0]<<endl;
	cout<<x[ka]<<" "<<x[kb];
	return 0;
}

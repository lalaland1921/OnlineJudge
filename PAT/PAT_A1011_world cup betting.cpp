#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char g[3]={'W','T','L'};
	double a[3],g_max,prod=1.0;
	int k;
	for(int i=0;i<3;i++)
	{
		g_max=0.0;
		for(int j=0;j<3;j++)
		{
			cin>>a[j];
			if(a[j]>g_max)
			{
				k=j;
				g_max=a[j];
			}
		}
		cout<<g[k]<<" ";
		prod*=g_max;
	}
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<(prod*0.65-1.0)*2.0<<endl;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int i=-1,coe,exp,a[2001][2];
	cin>>coe;
	while(coe!='\n')
	{
		cin>>exp;
		if(exp!=0)
		{
			i++;
			a[i][0]=coe*exp;
			a[i][1]--;
		}
		else;
		cin>>coe;
	}
	if(i==-1)
	cout<<"0 0"<<endl;
	else for(int j=0;j<i;j++)
	{
		cout<<a[j][0]<<" "<<a[j][1]<<" ";
	}
	cout<<a[i][0]<<" "<<a[i][1]<<endl;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	char ch[19],m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	int n,z=0,flag=0,a,flag2=0,b[18]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	cin>>n;
	for(int j=0;j<n;j++)
	{
		flag=z=0;
		cin>>ch;
		for(int i=0;i<17;i++)
		{
			if(ch[i]<'0'||ch[i]>'9')
			{
				flag=1;
				break;
			}
			else
			{
				a=ch[i]-'0';
				z+=b[i]*a;
			}
		}
		if(flag>0)
		{
			flag2++;
			cout<<ch<<endl;
		}
		else
		{
			z%=11;
			if(ch[17]!=m[z])
			{
			flag2++;
			cout<<ch;
			}
		}
	}
	if(flag2==0)
	{
		cout<<"ALL passed";
	}
}

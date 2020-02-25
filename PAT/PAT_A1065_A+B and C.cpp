#include <iostream>
using namespace std;
int main()
{
	int t;
	long long a,b,c,res;
	bool flag;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b>>c;
		res=a+b;
		if(a<0&&b<0&&res>0)
		flag=false;
		else if(a>0&&b>0&&res<0)
		{
			flag=true;
		}
		else if(res>c)
		{
			flag=true;
		}
		else
		{
			flag=false;
		}
		if(flag==true)
		cout<<"Case #"<<i+1<<": true"<<endl;
		else
		cout<<"Case #"<<i+1<<": false"<<endl;
	}
	return 0;
}


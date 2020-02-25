#include <iostream>
#include <algorithm>
bool cmp(int a,int b)
{
	return a>b;
} 
using namespace std;
int main()
{
	int n,a,num[101];
	bool hashtable[110]={false};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		num[i]=a;
		while(a>1)
		{
			if(a%2==0)
			{
				a=a/2;
				if(a<101)
				hashtable[a]=true;
			}
			else
			{
				a=3*a+1;
				if(a<101)
				hashtable[a]=true;
			}
		}
	}
	int flag=0;
	sort(num,num+n,cmp);
	for(int i=0;i<n;i++)
	{
		if(hashtable[num[i]]==false)
		{
			if(flag>0)
			cout<<" "; 
			cout<<num[i];
			flag=1;
		}
	}
	return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char ch[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"},num[101];
	cin>>num;
	int sum=0,n,a[4];
	n=strlen(num);
	do
	{
		sum+=num[--n]-'0';
	}while(n);
	do
	{
		a[n++]=sum%10;
		sum=sum/10;
	}while(sum!=0);
	for(int i=n-1;i>0;i--)
	cout<<ch[a[i]]<<" ";
	cout<<ch[a[0]];
	return 0;
}

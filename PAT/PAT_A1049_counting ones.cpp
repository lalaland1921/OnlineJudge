#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n=0,temp=1,ans=0;
	char a[31];
	cin>>a;
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		n=10*n+(a[i]-'0');
	}
	for(int i=len-1;i>=0;i--)
	{
		temp*=10;
		ans+=n/temp*temp/10;
		if(a[i]>'1')
		ans+=temp/10;
		else if(a[i]=='1')
		ans+=n%(temp/10)+1;
	}
	cout<<ans;
	return 0;
}

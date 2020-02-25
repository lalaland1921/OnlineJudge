#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[10][6]={"zero","one","two","three","four","five","six","seven","nine"},ch[102];
	int sum=0,ans[4],len=0;
	cin>>ch;
	len=strlen(ch);
	while(len--)
	sum+=ch[len]-'0';
	len=0;
	do
	{
		ans[len++]=sum%10;
		sum/=10;
	}while(sum!=0);
	for(int i=len-1;i>=0;i--)
	{
		cout<<str[ans[i]];
		if(i!=0)
		cout<<" ";
	}
	return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[10000];
	int flag,len,b=1,bit=0;
	cin>>str;
	len=strlen(str);
	for(int i=4;i<len;i++)
	{
		if(str[i]=='E')
		flag=i;
	}
	for(int i=len-1;i>flag+1;i--)
	{
		bit+=b*(str[i]-'0');
		b*=10;
	}
	if(bit==0)
	{
		for(int i=1;i<flag;i++)
		cout<<str[i];
	}
	else
	{
		if(str[flag+1]=='-')
	{
		if(str[0]=='-')
		cout<<'-';
		cout<<"0.";
		for(int i=1;i<bit;i++)
		cout<<'0';
		cout<<str[1];
		for(int i=3;i<flag;i++)
		{
			cout<<str[i];
		}
	}
	else
	{
		if(str[0]=='-')
		cout<<'-';
		cout<<str[1];
		for(int i=3;i<flag;i++)
		{
			cout<<str[i];
			if(i==2+bit&&i!=flag)
			cout<<".";
		}
		for(int i=flag;i<3+bit;i++)
		cout<<"0";
	}
	}
	return 0;
}

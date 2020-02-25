#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[4][61],date[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int t[3],len[4],i;
	cin>>str[0];
	cin>>str[1];
	cin>>str[2];
	cin>>str[3];
	for(int i=0;i<4;i++)
	{
		len[i]=strlen(str[i]);
	}
	for(i=0;i<len[0]&&i<len[1];i++)
	{
		if(str[0][i]==str[1][i]&&str[0][i]>='A'&&str[0][i]<='G')
		{
			t[0]=str[0][i]-'A';
			break;
		}
	}
	for(int j=i+1;j<len[0]&&j<len[1];j++)
	{
		if(str[0][j]==str[1][j])
		{
			if(str[0][j]>='A'&&str[0][j]<='N')
		{
			t[1]=str[0][j]-'A'+10;
			break;
		}
		else if(str[0][j]>='0'&&str[0][j]<='9')
		{
			t[1]=str[0][j]-'0';
			break;
		}
		else;
		}
		
	}
	for(i=0;i<len[2]&&i<len[3];i++)
	{
		if(str[2][i]==str[3][i]&&(str[2][i]<='z'&&str[2][i]>='A'))
		{
			t[2]=i;
			break;
		}
		else;
	}
	cout<<date[t[0]]<<" ";
	if(t[1]<10)
	cout<<"0";
	else;
	cout<<t[1]<<":";
	if(t[2]<10)
	cout<<"0";
	else;
	cout<<t[2];
	return 0;
}

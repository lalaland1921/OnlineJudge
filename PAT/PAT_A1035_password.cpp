#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n,len,flag=0,i=0;
	char name[1000][20],password[1000][20],str1[20],str2[20];
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>str1;
		cin>>str2;
		len=strlen(str2);
		flag=0;
		for(int i=0;i<len;i++)
		{
			if(str2[i]=='1')
			{
				str2[i]='@';
				flag=1;
			}
			else if(str2[i]=='0')
			{
				str2[i]='%';
				flag=1;
			}
			else if(str2[i]=='l')
			{
				str2[i]='L';
				flag=1;
			}
			else if(str2[i]=='O')
			{
				str2[i]='o';
				flag=1;
			}
			else;
		}
		if(flag==1)
		{
			strcpy(name[i],str1);
			strcpy(password[i],str2);
			i++;
		}
	}
	if(i==0)
	{
		cout<<"There ";
		if(n==1)
		cout<<"is 1 account ";
		else
		cout<<"are "<<n<<" accounts ";
		cout<<"and no account is modified";
	}
	else
	{
		cout<<i<<endl;
		for(int j=0;j<i;j++)
		cout<<name[j]<<" "<<password[j]<<endl;
	}
	return 0;
}

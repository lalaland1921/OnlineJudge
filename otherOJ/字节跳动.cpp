#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int a[11][11],len,s=0,h,ans=0;
	char str[30];
	while(gets(str))
	{
		len=strlen(str);
		h=0;
		for(int i=0;i<len;i++)
		{
			if(str[i]!=' ')
			{
				a[s][h]=str[i]-'0';
				h++;
			}
		}
		s++;
	}
	bool flag1=true;
	while(flag1==true)
	{
		flag1=false;
		for(int i=0;i<s;i++)
		{
			for(int j=0;j<h;j++)
			{
				if(a[i][j]==2)
				{
					if(i-1>=0&&a[i-1][j]==1)
					{
						flag1=true;
						a[i-1][j]=2;
					}
					if(j-1>=0&&a[i][j-1]==1)
					{
						flag1=true;
						a[i][j-1]=2;
					}
					if(i+1<s&&a[i+1][j]==1)
					{
						flag1=true;
						a[i+1][j]=2;
					}
					if(j+1<s&&a[i][j+1]==1)
					{
						flag1=true;
						a[i][j+1]=2;
					}
				}
			}
		}
		if(flag1==true)
		ans++;
	}
	bool flag2=false;
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<h;j++)
		if(a[i][j]==1)
		{
			flag2=true;
			break;
		}
	}
	if(flag2==true)
	cout<<'-1'<<endl;
	else
	cout<<ans;
	return 0;
} 

#include <stdio.h>
#include <string.h>
bool Judge(char str[])
{
	int len,a[5]={0};
	len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]!='P'&&str[i]!='A'&&str[i]!='T')
		return false;
		if(str[i]=='P')
		{
			a[0]++;
			if(a[0]>1||a[1]>0)//注意！ 
			return false;
		}
		else if(str[i]=='T')
		{
			a[1]++;
			if(a[0]==0||a[1]>1)
			return false;
		}
		else
		{
			if(a[0]==0)
			a[2]++;
			else if(a[0]==1&&a[1]==0)
			a[3]++;
			else
			a[4]++;
		}
	}
	if(a[0]==1&&a[1]==1&&a[3]>=1&&a[3]*a[2]==a[4])//发现该规律 
	return true;
	return false;
}
int main()
{
	int n;
	char str[11][101];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",str[i]);
		if(Judge(str[i])==true)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}


#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstdio>
using namespace std;
const int MAXN=100001;
const int MOD=1000000007;
int main()
{
	char str[MAXN];
	int rightp[MAXN]={0},leftt=0,ans=0;
	gets(str);
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(i>0)
		rightp[i]=rightp[i-1];
		if(str[i]=='P')
		rightp[i]++;
	}
	for(int i=len-1;i>=0;i--)
	{
		if(str[i]=='T')
		leftt++;
		if(str[i]=='A')
		ans=(ans+rightp[i]*leftt)%MOD;
	}
	cout<<ans;
	return 0;
}

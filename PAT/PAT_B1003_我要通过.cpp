#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
struct PAT
{
	int a[3],id,ans;
}pat[11];
bool cmp(PAT a,PAT b)
{
	if(a.a[0]!=b.a[0])
	return a.a[0]<b.a[0];
	else if(a.a[1]!=b.a[1])
	return a.a[1]<b.a[1];
	else 
	return a.a[2]<b.a[2];
}
char str[2][4]={"NO","YES"};
int main()
{
	char ch[101];
	int n,len,pos[11];
	cin>>n;
	getchar();
	for(int i=0;i<n;i++)
	{
		gets(ch);
		len=strlen(ch);
		pat[i].id=i;
		pat[i].a[0]=pat[i].a[1]=pat[i].a[2]=0;
		pat[i].ans=-1;
		for(int j=0,k=0;j<len;j++)
		{
			if(ch[j]!='P'&&ch[j]!='A'&&ch[j]!='T')
			{
				pat[i].ans=0;
				break;
			}
			else
			{
				if(ch[j]=='A')
				pat[i].a[k]++;
				else if(ch[j]=='P'&&k==0||ch[j]=='T'&&k==1)
				k++;
				else
				{
						pat[i].ans=0;
						break;
				}
			}
		}
		pat[i].a[1]=len-pat[i].a[0]-pat[i].a[2]-2;
		if(pat[i].ans==-1)
		{
			if(pat[i].a[1]==1)
			pat[i].ans=1;
		}
	}
	sort(pat,pat+n,cmp);
	for(int i=0;i<n;i++)
	{
		pos[pat[i].id]=i;
		if(pat[i].ans==-1)
		{
			if(i>0&&pat[i-1].a[0]==pat[i].a[0]&&pat[i-1].a[1]==pat[i].a[1]-1&&pat[i-1].a[2]<=pat[i].a[2]&&pat[i-1].ans==1)
			pat[i].ans=1;
			else
			pat[pos[i]].ans=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<str[pat[pos[i]].ans]<<endl;

	}
}

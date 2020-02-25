#include <iostream>
#include <string.h>
using namespace std;
char str1[11],str2[11];
long long n1[11],n2[11],len1,len2,tag;
long long radix;
long long sum(char str[],long long n[],long long r)
{
	int sum=0,len;
	len=strlen(str);
	for(int i=0;i<len;i++)
	{
		sum=sum*r+n[i];
		if(sum<0)
		return -1;
	}
	return sum;
}
long long max_r()
{
	long long m=0;
	for(int i=0;i<len2;i++)
	{
		if(n2[i]>m)
		m=n2[i];
	}
	return m;
}
int main()
{
	char temp[11];
	cin>>str1>>str2>>tag>>radix;
	if(tag==2)
	{
		strcpy(temp,str1);
		strcpy(str1,str2);
		strcpy(str2,temp);
	}
	len1=strlen(str1);
	len2=strlen(str2);
	for(int i=0;i<len1;i++)
	{
		if(str1[i]>='a'&&str1[i]<='z')
		n1[i]=str1[i]-'a'+10;
		else
		n1[i]=str1[i]-'0';
	}
	for(int i=0;i<len2;i++)
	{
		if(str2[i]>='a'&&str2[i]<='z')
		n2[i]=str2[i]-'a'+10;
		else
		n2[i]=str2[i]-'0';
	}
	int ans,mid;
	long long s1,s2;
	s1=sum(str1,n1,radix);
	long long l=max_r()+1,r=s1;
	while(l<r)
	{
		mid=(l+r)/2;
		s2=sum(str2,n2,mid);
		if(s2>0&&s2<s1)
		l=mid+1;
		else if(s2>s1||s2<0)
		r=mid-1;
		else if(s2==s1)
		{
			cout<<mid;
			break;
		}
	}
	if(s2!=s1)
	cout<<"Impossible";
	return 0;
}

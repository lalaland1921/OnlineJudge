#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
bool cmp(char a,char b)
{
	return strcmp(a,b)<0;
}
int main()
{
	int n;
	char seg[10010][9];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%s",seg[i]);
	}
	sort(seg,seg+n,cmp);
	int k=0;
	while(seg[k][0]=='0')
	k++;
	char min[9];
	strcpy(min,seg[k]);
	int begin;
	for(int i=0;i<k;i++)
	{
		int j=0;
		while(seg[i][j]=='0')
		j++;
		int len=strlen(seg[i]);
		int m=0;
		char temp[9];
		while(j<len)
		{
			temp[m]=seg[i][j];
			m++;
			j++;
		}
		if(strcmp(min,temp)>0)
		{
			strcpy(min,temp);
			begin=i;
		}
	}
	cout<<min;
	for(int i=0;i<n;i++)
	{
		if(i!=begin)
		cout<<seg[i];
		else;
	}
	return 0;
}

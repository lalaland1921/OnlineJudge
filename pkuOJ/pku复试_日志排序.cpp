#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string.h>
#include <cstdio>
using namespace std;
struct Node
{
	char str[100],date[20],begintime[20],time[20];
}node[10000];
bool cmp(Node a,Node b)
{
	if(a.time!=b.time)
	return a.time<b.time;
	else if(a.date!=b.date)
	return a.date<b.date;
	else
	return a.begintime<b.begintime;
}
int main()
{
	int i=0,len;
	while(gets(node[i].str))
	{
		len=strlen(node[i].str);
		int j=0;
		while(node[i].str[j]==' ')j++;
		while(node[i].str[j]!=' ')j++;
		while(node[i].str[j]==' ')j++;
		for(int k=0;node[i].str[j]!=' ';k++,j++)
		node[i].date[k]=node[i].str[j];
		while(node[i].str[j]==' ')j++;
		for(int k=0;node[i].str[j]!=' ';k++,j++)
		node[i].begintime[k]=node[i].str[j];
		while(node[i].str[j]==' ')j++;
		for(int k=0;node[i].str[j]!=' ';k++,j++)
		node[i].time[k]=node[i].str[j];
		i++;
	}
	sort(node,node+i,cmp);
	for(int j=0;j<i;j++)
	printf("%s",node[j].str);
	return 0;
} 

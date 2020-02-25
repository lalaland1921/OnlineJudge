#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string.h> 
#include <string>//这样才能用string类型 
using namespace std;
struct Node
{
	string start;
	float time;
	char raw[100];
}node[10000];
bool cmp(Node a,Node b)
{
	if(a.time!=b.time)
	return a.time<b.time;
	else
	return a.start<b.start;
}
int main()
{
	int i=0;
	char name[20],date[20],t[20];
	while(gets(node[i].raw)&&strlen(node[i].raw)!=0)
	{
		sscanf(node[i].raw,"%s %s %s %f",name,date,t,&node[i].time);//不能用%s来输入 string类型 
		node[i].start=(string)date+(string)t;
		i++;
	}
	sort(node,node+i,cmp);
	for(int j=0;j<i;j++)
	printf("%s",node[i].raw); 
	return 0;
}

#include <cstdio>
#include <cstring>
void change(char str[])
{
	
}
int main()
{
	char str[2][12];
	int tag,r,num[2][12],len[2];
	scanf("%s %s %d %d",&str[0],&str[1],&tag,&r);
	tag--;
	for(int i=0;i<2;i++)
	{
		change(str[i]);
		len[i]=strlen(str[i]);
	}
	bool flag=false;
	if(len[tag]<len[1-tag])
	flag=true;
	else if(len[tag]==len[1-tag])
	{
		if(num[tag][0]<num[1-tag][0])
		flag=true;
		else if(num[tag][0]==num[1-tag][0])
		{
			printf("%d",r);
			return;
		}
	}
	else;
	if(flag==false)
}

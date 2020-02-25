#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	char str[100010];
	bool hashtable[256]={true};
	int low,len;
	gets(str);
	len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		str[i]=str[i]-'A'+'a';
		hashtable[str[i]]=false;
	}
	gets(str);
	len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			low=str[i]-'A'+'a';
			if(hashtable[low]==true&&hashtable['+']==true)
			printf("%c",str[i]);
		}
		else
		if(hashtable[str[i]]==true)
		printf("%c",str[i]);
	}
	return 0;
}

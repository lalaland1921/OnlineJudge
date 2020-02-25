#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[81],str2[81],check[81];
	int len1,len2,count=0;
	gets(str1);
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	for(int i=0,j=0;i<len1;i++)
	{
		int flag=0;
		if(str1[i]==str2[j])
		j++;
		else
		{
			if(str1[i]>='a'&&str1[i]<='z')
			str1[i]=str1[i]-'a'+'A';
			for(int k=0;k<count&&flag==0;k++)
			{
				if(str1[i]==check[k])
				flag=1;
			}
			if(flag==0)
			{
				check[count]=str1[i];
				count++;
			}
		}
	}
	for(int i=0;i<count;i++)
	cout<<check[i];
	return 0;
}

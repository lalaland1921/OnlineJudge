#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[100001];
	int n=0,len,num1=0,num2=0;
	cin.getline(str,100001);
	len=strlen(str);
	for(int i=0;i<len;i++) 
	{
		if(str[i]>='a'&&str[i]<='z')
		n+=str[i]-'a'+1;
		if(str[i]>='A'&&str[i]<='Z')
		n+=str[i]-'A'+1;
	}
	while(n>0)
	{
		switch(n%2)
		{
			case 1:num2++;break;
			case 0:num1++;break;
		}
		n/=2;	
	}
	printf("%d %d",num1,num2);
	return 0;
}

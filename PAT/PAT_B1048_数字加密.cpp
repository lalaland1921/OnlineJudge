#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[101],str2[101],str[13]={'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
	int num[101],len1,len2,pos;
	cin>>str1;
	cin>>str2;
	len1=strlen(str1);
	len2=strlen(str2);
	pos=len2-1;
	do
	{
		if((len2-pos)%2==0)
		num[pos]=(str2[pos]-str1[pos+len1-len2]+10)%10;
		else
		num[pos]=(str2[pos]+str1[pos+len1-len2]-'0'-'0')%13;
		pos--;
	}while(pos>=0&&(pos+len1-len2)>=0);
	for(int i=0;i<=pos;i++)
	{
		cout<<str2[i];
	}
	for(int i=0;i<=pos+len1-len2;i++)
	{
		if((len1-i)%2==0)
		cout<<(10-str1[i]+'0');
		else
		cout<<str1[i];
	}
	for(int i=pos+1;i<len2;i++)
	cout<<str[num[i]];
	return 0;
} 

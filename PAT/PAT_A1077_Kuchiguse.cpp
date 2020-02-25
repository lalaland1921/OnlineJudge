#include <iostream>
#include <cstring>
using namespace std;
void reverse(char str[])
{
	int len=strlen(str);
	char temp;
	for(int i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
}
int main()
{
	int n,minlen=256,pos=0,len,flag;
	char sen[100][257],str[257];
	cin>>n;
	getchar();
	for(int i=0;i<n;i++)
	{
		cin.get(str,256);
		getchar();
		len=strlen(str);
		reverse(str);
		strcpy(sen[i],str);
		if(len<minlen)
		minlen=len;
	}
	for(pos=0;pos<minlen;pos++)
	{
		flag=0;
		for(int i=0;i<n;i++)
		{
			if(sen[i][pos]!=sen[0][pos])
			{
				cout<<sen[i][pos];
				flag=1;
			}
			else;
		}
		if(flag==1);
		break;
	}
	if(pos==0)
	cout<<"nai"<<endl;
	else
	{
		for(int i=pos-1;i>=0;i--)
		cout<<sen[0][i];
	}
	return 0;
}

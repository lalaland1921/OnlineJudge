#include <iostream>
#include <string.h>
using namespace std;
char ch[2][4]={"NO","YES"};
int main()
{
	char str[101];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		int len=strlen(str);
		int a[3]={0},ans=-1;
		for(int j=0,k=0;j<len;j++)
		{
			if(str[j]=='A')
			a[k]++;
			else if(k==0&&str[j]=='P')
			k++;
			else if(k==1&&str[j]=='T')
			k++;
			else
			{
				ans=0;
				break;
			}
		}
		if(ans==-1)
		{
			if(a[1]>0&&a[0]*a[1]==a[2])
			ans=1;
			else
			ans=0;
		}
		cout<<ch[ans]<<endl;
	}
	return 0;
}

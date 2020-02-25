#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
	int p[100001],a[100001],t[100001],ans=0;
	char str[100001];
	cin>>str;
	int len=strlen(str);
	int cp=0,ca=0,ct=0;
	for(int i=0;i<len;i++)
	{
		if(str[i]=='P')
		{
			p[cp]=i;
			cp++;
		}
		else if(str[i]=='A')
		{
			a[ca]=i;
			ca++;
		}
		else
		{
			t[ct]=i;
			ct++;
		}
	}
	for(int i=0,j=0,k=0;j<ca;j++)
	{
		while(i<cp&&p[i]<a[j])
		i++;
		while(k<ct&&t[k]<a[j])
		k++;
		ans+=i*(ct-k)%1000000007;
	}
	cout<<ans<<endl;
	return 0;
}

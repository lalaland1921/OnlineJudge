#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char str[31];
	int a[31],b[150],len,in=0,c;
	while(scanf("%s",str)!=EOF)
	{
		len=strlen(str);
		for(int i=0;i<len;i++)
		a[i]=str[i]-'0';
		int i=0,k=0;
		while(i<len)
		{
			b[k++]=a[len-1]%2;
			in=0;
			for(int j=i;j<len-1;j++)
			{
				c=a[j];
				a[j]=in*10+a[j]/2;
				in=c%2;
			}
			if(a[i]==0)
			i++;
		}
		for(int i=k-1;i>=0;i--)
		printf("%d",b[i]);
		printf("\n");
	}
	return 0;
}

#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int n,flag=0,flag1,sum,a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char str[19],b[11]={'1','0','x','9','8','7','6','5','4','3','2'};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		flag1=1;
		sum=0;
		scanf("%s",str);
		int len=strlen(str);
		for(int j=0;j<len-1;j++)
		{
			if(str[j]<'0'||str[j]>'9')
			{
				flag1=0;
				break;
			}
			sum+=(str[j]-'0')*a[j];
		}
		if(b[sum%11]!=str[17])
		flag1=0;
		if(flag1==0)
		{
			printf("%s\n",str);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("All passed\n");
	}
	return 0;
}

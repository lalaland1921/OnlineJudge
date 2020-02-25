#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	char skew[33];
	int len,sum;
	while(scanf("%s",skew)!=EOF)
	{
		len=strlen(skew);
		if(len==0&&skew[0]=='0')
		break;
		sum=0;
		for(int i=0;i<len;i++)
		{
			sum+=(skew[i]-'0')*(pow(2,len-i)-1);
		}
		printf("%d\n",sum);
	}
	return 0;
} 

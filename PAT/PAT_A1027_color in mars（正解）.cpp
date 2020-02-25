#include <iostream>
using namespace std;
int main()
{
	char radix[13]={'0','1','2','3','4','5','6','7','8','9','A','B','C'};
	int r,g,b;
	cout<<"#";
	scanf("%d %d %d",&r,&g,&b);
	cout<<radix[r/13]<<radix[r%13]<<radix[g/13]<<radix[g%13]<<radix[b/13]<<radix[b%13];
	return 0;
}

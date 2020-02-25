#include <iostream>
using namespace std;
int main()
{
	int a[11]={0};
	char ch;
	do
	{
		ch=cin.get();
		if(ch!='\n')
		a[ch-'0']++;
	}while(ch!='\n');
	for(int i=0;i<10;i++)
	{
		if(a[i]!=0)
		cout<<i<<":"<<a[i]<<endl;
	}
	return 0;
}

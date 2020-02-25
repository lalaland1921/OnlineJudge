#include <iostream>
using namespace std;
int main()
{
	int n,grade,hashtable[101]={0},k;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>grade;
		hashtable[grade]++;
	}
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>grade;
		if(i!=0)
		cout<<" ";
		cout<<hashtable[grade];
	}
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int n;
	char a[4][10]={"janu","feb","mar","apri"};
	cin>>n;
	if(n<4)
	cout<<a[n-1];
	else cout<<"the month is wrong";
	return 0;
}

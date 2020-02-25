#include <iostream>
using namespace std;
int main()
{
	int a[3]={1,2,3};
	int *p;
	for(p=a;p<a+sizeof(a)/sizeof(int);++p)
	{
		*p+=2;
		cout<<*p<<std::endl;
	}
	return 0;
}

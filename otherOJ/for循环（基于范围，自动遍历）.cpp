#include <iostream>
using namespace std;
int main()
{
	int a[3]={1,2,3};
	for(int &e:a)//����a��ʼ��e,����������ʱ������ 
	{
		e+=2;
		std::cout<<e<<std::endl;
	}
	return 0;
 } 

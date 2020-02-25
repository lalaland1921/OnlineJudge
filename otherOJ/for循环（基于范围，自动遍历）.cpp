#include <iostream>
using namespace std;
int main()
{
	int a[3]={1,2,3};
	for(int &e:a)//遍历a初始化e,处理容器类时更有用 
	{
		e+=2;
		std::cout<<e<<std::endl;
	}
	return 0;
 } 

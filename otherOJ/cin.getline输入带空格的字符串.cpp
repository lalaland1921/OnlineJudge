#include <iostream>
using namespace std;
main()
{
	int i; 
	char a[100];
	cin.getline(a,99);//可以输入最长为99（回车结束）的 字符串，中间可以 有空格
	for(i=0;a[i]!='\0';i++)
	cout<<a[i];
	return 0;
}


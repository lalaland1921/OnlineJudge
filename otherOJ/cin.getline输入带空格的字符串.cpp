#include <iostream>
using namespace std;
main()
{
	int i; 
	char a[100];
	cin.getline(a,99);//���������Ϊ99���س��������� �ַ������м���� �пո�
	for(i=0;a[i]!='\0';i++)
	cout<<a[i];
	return 0;
}


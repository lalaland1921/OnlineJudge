#include <iostream> 
using namespace std;
main()
{
	int *p,n,i;
	cin>>n;
	p=new int[n];//Ϊ������䶯̬�ռ� 
	if(p==NULL)
	cout<<"allocation failed";
	for(i=0;i<n;i++)
	cin>>p[i];
	for(i=0;i<n;i++)
	cout<<p[i]<<" ";
//	delete p,�����ͷ�һ��Ԫ��
	delete []p;//�ͷ����飬һ��Ҫ�ͷ� 
	return 0;
}

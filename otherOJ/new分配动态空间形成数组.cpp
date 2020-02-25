#include <iostream> 
using namespace std;
main()
{
	int *p,n,i;
	cin>>n;
	p=new int[n];//为数组分配动态空间 
	if(p==NULL)
	cout<<"allocation failed";
	for(i=0;i<n;i++)
	cin>>p[i];
	for(i=0;i<n;i++)
	cout<<p[i]<<" ";
//	delete p,仅仅释放一个元素
	delete []p;//释放数组，一定要释放 
	return 0;
}

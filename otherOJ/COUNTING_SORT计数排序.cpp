#include <iostream>
using namespace std;
COUNTING_SORT(int A[],int B[],int C[],int n)
{
for(int i=0;i<100;i++)
{
	B[i]=0;
}
for(int i=0;i<n;i++)
{
	B[A[i]]++;
}
for(int i=1;i<100;i++)
{
	B[i]+=B[i-1];
} 
for(int i=n-1;i>=0;i--)
{
	C[--B[A[i]]]=A[i];
 } 
}
int main()
{
int A[100],B[100],C[100],n;
cout<<"���������г���"<<endl;
cin>>n; 
cout<<"�������������"<<endl;
for(int i=0;i<n;i++)
{
	cin>>A[i];
}
COUNTING_SORT(A,B,C,n);
cout<<"���������Ϊ��"<<endl;
for(int i=0;i<n;i++)
{
	cout<<C[i]<<" ";
 } 
return 0;
}

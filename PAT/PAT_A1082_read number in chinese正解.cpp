#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char d[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"},wei[5][5]={"Shi","Bai","Qian","Wan","Yi"},num[15];
	int len,left,right;
	cin>>num;
	len=strlen(num);
	left=0;right=len-1;
	if(num[0]=='-')
	{
		cout<<"Fu";
		left=1;
	}
	while(left+4<=right)
	{
		right-=4;
	}
	while(right<len)
	{
		bool flag=false,outif=false;
		while(left<=right)
		{
			if(num[left]=='0'&&left>0)
			{
				flag=true;
				left++;
			}
			else
			{
				if(flag==true)
				{
					cout<<" "<<d[0];
					flag=false;
				} 
				if(left!=0)
				cout<<" ";
				cout<<d[num[left]-'0'];
				if(left!=right)
				cout<<" "<<wei[left-right-1];
				left++;
				outif=true;
			}
		}
		if(right!=len-1&&outif==true)
		{
			cout<<" "<<wei[(len-1-right)/4+2];
		}
		right+=4;
	}
	return 0;
 } 

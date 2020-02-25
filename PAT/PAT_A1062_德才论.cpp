#include <iostream>
using namespace std;
struct stu
{
	int num,de,cai,sum;
};
int main()
{
	int n,l,h,m=0,num,de,cai,*q;
	stu *p;
	cin>>n>>l>>h;
	p=new stu[n];
	for(int i=0;i<n;i++)
	{
		cin>>num>>de>>cai;
		if(de>=l&&cai>=l)
		{
			p[m].num=num;
			p[m].de=de;
			p[m].cai=cai;
			p[m].sum=de+cai;
			m++;
		}
	}
	q=new int[m];
	for(int i=0;i<m;i++)
	{
		q[i]=i;
	}
	int left=0,right=0;
	while(right<m)
	{
		int temp;
		if(p[q[right]].de>=h&&p[q[right]].cai>=h)
		{
			temp=q[left];
			q[left]=q[right];
			q[right]=temp;
			int i=0;
			while(left-i>=0&&p[q[left]].sum>=p[q[left-i]].sum)
			{
				if(p[q[left]].sum>p[q[left-i]].sum)
				i++;		
				else if(p[q[left]].de>p[q[left-i]].de)
				i++;
				else if(p[q[left]].num<p[q[left-i]].num)
				i++;
				else break;
			}
			temp=q[left];
			for(int j=0;j<i-1;j++)
			{
				q[left-j]=q[left-j-1];
			}
			q[left-i+1]=temp;
			left++;
		}
		right++;
	}//第一类排序完 
	right=left;
	while(right<m)
	{
		int temp;
		if(p[q[right]].de>=h&&p[q[right]].cai<h)
		{
			temp=q[left];
			q[left]=q[right];
			q[right]=temp;
			int i=0;
			while(left-i>=0&&p[q[left]].sum>=p[q[left-i]].sum)
			{
				if(p[q[left]].sum>p[q[left-i]].sum)
				i++;		
				else if(p[q[left]].de>p[q[left-i]].de)
				i++;
				else if(p[q[left]].num<p[q[left-i]].num)
				i++;
				else break;
			}
			temp=q[left];
			for(int j=0;j<i-1;j++)
			{
				q[left-j]=q[left-j-1];
			}
			q[left-i+1]=temp;
			left++;
		}
		right++;
	}
    right=left;
    while(right<m)
	{
		int temp;
		if(p[q[right]].de<h&&p[q[right]].cai<h&&p[q[right]].de>=p[q[right]].cai)
		{
			temp=q[left];
			q[left]=q[right];
			q[right]=temp;
			int i=0;
			while(left-i>=0&&p[q[left]].sum>=p[q[left-i]].sum)
			{
				if(p[q[left]].sum>p[q[left-i]].sum)
				i++;		
				else if(p[q[left]].de>p[q[left-i]].de)
				i++;
				else if(p[q[left]].num<p[q[left-i]].num)
				i++;
				else break;
			}
			temp=q[left];
			for(int j=0;j<i-1;j++)
			{
				q[left-j]=q[left-j-1];
			}
			q[left-i+1]=temp;
			left++;
		}
		right++;
	}
	right=left;
    while(right<m)
	{
		
		int i=0;
			while(left-i>=0&&p[q[left]].sum>=p[q[left-i]].sum)
			{
				if(p[q[left]].sum>p[q[left-i]].sum)
				i++;		
				else if(p[q[left]].de>p[q[left-i]].de)
				i++;
				else if(p[q[left]].num<p[q[left-i]].num)
				i++;
				else break;
			}
			int temp=q[left];
			for(int j=0;j<i-1;j++)
			{
				q[left-j]=q[left-j-1];
			}
			q[left-i+1]=temp;
			left++;	
		right++;
	}
	cout<<m<<endl;
	for(int i=0;i<m;i++)
	{
		cout<<p[q[i]].num<<" "<<p[q[i]].de<<" "<<p[q[i]].cai<<endl;
	}
	return 0;
}

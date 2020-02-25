#include <cstdio>
const int kmax=10001;
int a[kmax],l1,r1,l2,m1,m2,k;
void Search()
{
	l1=l2=r1=m1=m2=a[0];
	int i=1;
	while(i<k)
	{
		if(m1<0)
		{
			l2=a[i];
			m2=a[i];
		}
		else
		{
			m2+=a[i];
		}
		if(m2>m1)
		{
			m1=m2;
			l1=l2;
			r1=a[i];
		}
		i++;
	}
}
int main()
{
	bool flag=false;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>=0)
		flag=true;
	}
	if(flag==false)
	{
		printf("0 ");
		printf("%d %d",a[0],a[k-1]);
	}
	else
	{
		Search();
		printf("%d %d %d",m1,l1,r1);
	}
}

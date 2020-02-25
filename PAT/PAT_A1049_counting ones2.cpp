#include <cstdio>
int main()
{
	int n,p=10,q=1,m,s=0;
	scanf("%d",&n);
	while(q>0)
	{
		q=n/p;
		m=(n%p)/(p/10);
		if(m==0)
		s+=q*(p/10);
		else if(m==1)
		s+=q*(p/10)+n%(p/10)+1;
		else
		s+=(q+1)*(p/10);
		p*=10;
	}
	printf("%d\n",s);
	return 0;
}

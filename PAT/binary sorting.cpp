#include <stdio.h>
#include <limits.h>
void binary_sort(int s[100], int p, int q)
{
   int i,j,m,a[100],b[100];
   if(p<q)
   {
   	binary_sort(s, p,(p+q)/2);
   	binary_sort( s, (p+q)/2+1, q);
   	for(i=0,j=p;j<=(p+q)/2;j++,i++)
   	{
   		a[i]=s[j];
	   }
	   a[i+1]=INT_MAX;
	   for(i=0,j=(p+q)/2;j<=q;j++,i++)
   	{
   		b[i]=s[j];
	   }
	   b[i+1]=INT_MAX;
   	for(i=0,j=0,m=p;m<=q;m++)
   	{
   		if(a[i]<b[j])
		   {
		   	s[m]=a[i];
		   	i++;
			} 
   		
   		else
		   {
		   	s[m]=b[j];
		   	j++;
			} 
    }
	   }
	   else if(p==q);	
}
int main()
{
int s[100],i,n;
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
scanf("%d",&s[i]);
char c=getchar();
if(c=='\n')
break;
}
binary_sort(s,0,n-1);
for(i=0;i<=n-1;i++)
printf("%d",s[i]);
return 0;
}

#include <cstdio>
using namespace std;
int main()
{
	int n,credit[11],sum=0,score;
	float gpa;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&credit[i]);
		sum+=credit[i];
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&score);
		if(score>=90&&score<=100)
		gpa+=4.0*credit[i];
		else if(score>=85&&score<=89)
		gpa+=3.7*credit[i];
		else if(score>=82&&score<=84)
		gpa+=3.3*credit[i];
		else if(score>=78&&score<=81)
		gpa+=3.0*credit[i];
		else if(score>=75&&score<=77)
		gpa+=2.7*credit[i];
		else if(score>=72&&score<=74)
		gpa+=2.3*credit[i];
		else if(score>=68&&score<=71)
		gpa+=2.0*credit[i];
		else if(score>=64&&score<=67)
		gpa+=1.5*credit[i];
		else if(score>=60&&score<=63)
		gpa+=1.0*credit[i];
		else;
	}
	printf("%.2f",gpa/sum);
	return 0;
} 

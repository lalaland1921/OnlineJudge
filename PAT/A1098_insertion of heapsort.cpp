#include <cstdio>
#include <algorithm>
using namespace std;
const int nmax=110;
int n,init[nmax],heap[nmax],order[nmax];
int find()
{
	int i=n+1;
	while(order[--i]==init[--i]);
	return i;
}
void downad(int low,int high)
{
	int i=low,j=i*2;
	while(i<=high)
	{
		if(j+1<=high&&heap[j+1]>heap[j])
		j=j+1;
		if(heap[i]<heap[j])
		{
			swap(heap[i],heap[j]);
			i=j;
			j=i*2;
		}
		else
		break;
	}
}
void sort(int k)
{
	swap(heap[k],heap[1]);
	downad(1,k-1);
}
void heapsort(int k)
{
	for(int i=n;i>k-1;i++)
	sort(i);
}
bool issame(int a[],int b[],int k)
{
	for(int i=1;i<=k;i++)
	{
		if(a[i]!=b[i])
		return false;
	}
	return true;
}
bool isinsert()
{
	int k=find();
	if(k==n)
	return false;
	sort(order+1,order+k+1);
	if(issame(order,heap,k))
	{
		sort(order+1,order+k+2);
		return true;
	}
	else
	return false;
}
void print(int a[])
{
	for(int i=1;i<=n;i++)
	{
		printf("%d",a[i]);
		if(i<n)
		printf(" ");
		else
		printf("\n");
	}
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&init[i]);
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&heap[i]);
		order[i]=heap[i];
	}
	if(isinsert())
	{
		printf("Insertion Sort\n");
		print(order);
	}
	else
	{
		printf("Heap Sort\n");
		sort(order+1,order+n+1);
		int k;
		k=find();
		heapsort(k);
		print(heap);
	}
	return 0;
}

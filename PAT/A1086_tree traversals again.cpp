#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;
stack<int> st;
struct Node
{
	int lchild,rchild;
}tree[50];
int in1[50],in2[50],n,count=0;
void postorder(int t)
{
	if(t==-1)
	return;
	else
	{
		postorder(tree[t].lchild);
		postorder(tree[t].rchild);
		printf("%d",t);
		count++;
		if(count<n)
		printf(" ");
	}
	return;
}
int creat(int prel,int prer,int inl,int inr)
{
	if(prel>prer)
	return -1;
	else
	{
		int temp=in2[prel]-inl;
		tree[prel].lchild=creat(prel+1,prel+temp,inl,in2[prel]-1);
		tree[prel].rchild=creat(prel+temp+1,prer,in2[prel]+1,inr);
	}
	return prel;
}
int main()
{
	char ch[5];
	int temp,count=1;
	scanf("%d",&n);
	for(int i=1;i<=2*n;i++)
	{
		scanf("%s",&ch);
		if(strcmp("Push",ch)==0)
		{
			scanf("%d",&temp);
			st.push(temp);
		}
		else
		{
			in1[count]=st.top();
			in2[st.top()]=count;
			st.pop();
			count++;
		}
	}
	int head=creat(1,n,1,n);
	postorder(head);
	return 0;
}

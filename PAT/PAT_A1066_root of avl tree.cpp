#include <cstdio>
#include <algorithm>
using namespace std;
struct Node
{
	int data,height;
	Node *leftchild,*rightchild;
};
Node *newnode(int d)
{
	Node *nd=new Node;
	nd->data=d;
	nd->height=1;
	nd->leftchild=nd->rightchild=NULL;
	return nd;
}
int getheight(Node *root)
{
	if(root==NULL)
	return 0;
	else
	return root->height;
}
int getbalancefactor(Node *root)
{
	return getheight(root->leftchild)-getheight(root->rightchild);
}
void updateheight(Node *root)
{
	root->height=max(getheight(root->leftchild),getheight(root->rightchild))+1;
}
void L(Node* &root)
{
	Node *temp;
	temp=root->rightchild;
	root->rightchild=temp->leftchild;
	temp->leftchild=root;
	updateheight(root);
	updateheight(temp);
	root=temp;
}
void R(Node* &root)
{
	Node *temp;
	temp=root->leftchild;
	root->leftchild=temp->rightchild;
	temp->rightchild=root;
	updateheight(root);
	updateheight(temp);
	root=temp;
}
void insert(Node* &root,int d)
{
	if(root==NULL)
	{
		root=newnode(d);
	}
	else
	{
		if(d==root->data)
		return;
		if(d>root->data)
		{
			insert(root->rightchild,d);
			updateheight(root);
			if(getbalancefactor(root)==-2)
			{
				if(getbalancefactor(root->rightchild)==-1)
				L(root);
				else
				{
					R(root->rightchild);
					L(root);
				}
			}
		}
		else
		{
			insert(root->leftchild,d);
			updateheight(root);
			if(getbalancefactor(root)==2)
			{
				if(getbalancefactor(root->leftchild)==1)
				R(root);
				else
				{
					L(root->leftchild);
					R(root);
				}
			}
		}
	}
}
int main()
{
	int n,d;
	scanf("%d",&n);
	scanf("%d",&d);
	Node *nd;
	nd->data=d;
	n--;
	while(n--)
	{
		scanf("%d",&d);
		insert(nd,d);
	}
	printf("%d",nd->data);
	return 0;
}

 

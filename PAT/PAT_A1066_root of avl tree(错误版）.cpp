#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int n; 
struct Node
{
	int weight,height;
	Node *leftchild,*rightchild,*parent;
}*tree;
void update(Node *leaf)
{
	int h;
	h=max(leaf.leftchild->height,leaf.rightchild->height)+1;
	if(h!=leaf->height)
	{
		leaf->height=h;
		if(leaf->parent!=NULL)
		update(leaf->parent);
	}
}
int height(Node *nd)
{
	if(nd==NULL)
	return 0;
	else
	return nd->height;
}
Node *find(Node *nd)
{
	int l,r;
	while(nd!=NULL)
	{
		l=height(nd->leftchild);
		r=height(nd->rightchild);
		if(abs(l,r)>1)
		return nd;
		else
		nd=nd->parent;
	}
	return NULL;
}
Node *instert(Node *root,Node *pre,int w)
{
	if(root==NULL)
	{
		Node nd=new Node;
		nd.parent=pre;
		nd.weight=w;
		nd.height=1;
		nd.leftchild=nd.rightchild=NULL;
		update(nd->parent);
		return &nd;
	}
	if(w==root->weight)
	return;
	if(w<root->weight)
	return insert(root->leftchild,w);
	else
	return insert(root->rightchild,w);
}
Node *L(Node *root);
{
	Node *temp;
	temp=root->rightchild;
	root->rightchild=temp->leftchild;
	temp->leftchild->parent=root;
	temp->leftchild=root;
	root->parent=temp;
	return temp;
}
Node *R(Node *root)
{
	Node *temp;
	temp=root->leftchild;
	root->leftchild=temp->rightchild;
	temp->parent=root;
	temp->rightchild=root;
	root->parent=temp;
	return temp;
}

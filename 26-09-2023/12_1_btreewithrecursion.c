#include<stdio.h>
#include<stdlib.h>
//binary trreeee
//create struct
#define MAXSIZE 12
struct node{
	int data;
	struct node *left;
	struct node * right;
};
typedef struct node tree;
tree *root=NULL;
void insert(int e)
{
	tree *t,*x;
	if(root==NULL)
		{
			root=(tree*)malloc(sizeof(tree));
			root->data=e;
			root->left=root->right=NULL;
		}
		else
		{
			t=root;
			while(t!=NULL)
			{
				x=t;
				if(t->data>e)
				{
					t=t->left;
				}
				else
				{
					t=t->right;
				}
			}
			t=x;
			if(t->data>e)
			{
				t->left=(tree*)malloc(sizeof(tree));
				t->left->data=e;
				t->left->left=NULL;
				t->left->right=NULL;
			}
			else
			{
				t->right=(tree*)malloc(sizeof(tree));
				t->right->data=e;
				t->right->left=NULL;
				t->right->right=NULL;
			}
		}
}
//lets disp
void inorder(tree *r)
{
	if(r!=NULL)
	{
		inorder(r->left);
		printf("%d\t",r->data);
		inorder(r->right);
	}
}
void preorder(tree *r)
{
	if(r!=NULL)
	{
		printf("%d\t",r->data);
		preorder(r->left);
		preorder(r->right);
	}
}

void postorder(tree *r)
{
	if(r!=NULL)
	{
		postorder(r->left);
		postorder(r->right);
		printf("%d\t",r->data);

	}
}
int main()
{
	insert(12);
	insert(20);
	insert(2);
	insert(23);
	insert(43);
	insert(22);
	printf("Inorder: ");
	inorder(root);
	printf("\nPreorder: ");
	preorder(root);
	printf("\nPostorder: ");
	postorder(root);
	return 0;
}

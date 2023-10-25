#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//binary trreeee
//create struct
#define MAXSIZE 12
struct node{
	 char data[20];
	struct node *left;
	struct node * right;
};
typedef struct node tree;
tree *root=NULL;
void insert(char e[])
{
	tree *t,*x;
	if(root==NULL)
		{
			root=(tree*)malloc(sizeof(tree));
			strcpy(root->data,e);
			root->left=root->right=NULL;
		}
		else
		{
				
			t=root;
			while(t!=NULL)
			{
				x=t;
				if(strcmp(t->data,e)>0)
				{
					t=t->left;
				}
				else
				{
					t=t->right;
				}
			}
			t=x;
			if(strcmp(t->data,e)>0)
			{
				t->left=(tree*)malloc(sizeof(tree));
				strcpy(t->left->data,e);
				t->left->left=NULL;
				t->left->right=NULL;
			}
			else
			{
				t->right=(tree*)malloc(sizeof(tree));
				strcpy(t->right->data,e);
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
		printf("%s\t",r->data);
		inorder(r->right);
	}
}

int main()
{
	insert("Akhil");
	insert("Richin");
	insert("Shelvin");
	insert("Dillu");
	insert("Meghu");
	insert("Roshan");
	printf("Inorder: ");
	inorder(root);
	return 0;
}

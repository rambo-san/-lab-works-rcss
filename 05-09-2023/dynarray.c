#include<stdio.h>
#include<malloc.h>
int n;
//so..we need to make a dynamic array...and reduce it until its a single value
//what do we need?get the array...
//so now we are going to  do the same using linked list
struct node
{
	int d;
	struct node *next;
};
typedef struct node *node; 
node head=NULL;
void getnode(int el)
{
	node t=head;
	if(head==NULL)
	{
		head=(node*)malloc(sizeof(node));
		head->d=el;
		head->next=NULL;
	}
	else
	{
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=( node*)malloc(sizeof( node));
		t->next->d=el;
		t->next->next=NULL;
	}
}
void displink()
{
	if(head==NULL)
	{
		printf("The linkedlist is empty");
	}
	else
	{
		node t=head;
			while(t->next!=NULL)
			printf("%d\t",t->d);
			t=t->next;
	}
}
int main()
{
	getnode(67);
	displink();
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
//doubly linkedlist
struct node
{
	int data;
	struct node *next;
	struct node *prev;

};
typedef struct node node;
node * head=NULL;
void insert(int e)
{
	if(head==NULL)
	{
	head=(node*)malloc(sizeof(node));
	head->data=e;
	head->next=head->prev=NULL;
	}
	else
	{
	node *t=head;
	while(t->next!=NULL)
		{
		t=t->next;
		}
	t->next=(node*)malloc(sizeof(node));
	t->next->data=e;
	t->next->next=NULL;
	t->next->prev=t;
	}
}
void disp()
{
	if(head==NULL)
	{
	printf("The list is empty");
	}
	else
	{
	node * t=head;
	do{
		printf("%d\t",t->data);
		t=t->next;
	}while(t!=NULL);
	}
}
void delete(int e)
{
	if(head==NULL)
	{	
		printf("The list is empty");
	}
	else
	{	
		node *t=head;
		if(head->data==e && head->next==NULL)//single
		{
			printf("Deleted : %d",head->data);
			head=NULL;
		}
		else if(head->data==e)
		{
			printf("Deleted : %d",head->data);
			head=head->next;
			head->prev=NULL;
		}
		else
		{
			while(t->next!=NULL && t->data!=e)
			t=t->next;
			if(t->data==e)
			{
				printf("Deleted : %d",t->next->data);
				t->prev->next=t->next;
				t->next->prev=t->prev;
			}
			else
			{
				printf("Element not found!");
			}
		}
	}
}
int menu()//the menu function
{
	int ch;
	printf("\nMENU\n1 - INSERT\n2 - DELETE\n3 - TRAVERSE\n4 - EXIT\nEnter your choice : ");
	scanf("%d",&ch);
	return ch;
}
int main()
{
	int ch;
	ch=menu();
	while(ch!=4)//while use choose other than exit
	{
		switch(ch)
		{
			case 1:
			printf("Enter the num to be Inserted : ");
			scanf("%d",&ch);
			insert(ch);
			break;
			case 2:
			printf("Enter the num to be Deleted : ");
			scanf("%d",&ch);
			delete(ch);
			break;
			case 3:
			disp();
			break;
			default:
			printf("\nError: Invalid Input");
		}
		ch=menu();
	}
	printf("Exited Successfully.....");
	return 0;
}

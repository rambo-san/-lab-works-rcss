#include<stdio.h>
#include<stdlib.h>
//circlular linkedlist
struct node
{
	int data;
	struct node *next;

};
typedef struct node node;
node * head=NULL;
void insert(int e)
{
	if(head==NULL)
	{
	head=(node*)malloc(sizeof(node));
	head->data=e;
	head->next=head;
	}
	else
	{
	node *t=head;
	while(t->next!=head)
		{
		t=t->next;
		}
	t->next=(node*)malloc(sizeof(node));
	t->next->data=e;
	t->next->next=head;
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
	}while(t!=head);
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
		if(head->data==e && head->next==head)//single
		{
			printf("Deleted : %d",head->data);
			head=NULL;
		}
		else if(head->data==e)
		{
			while(t->next!=head)
			t=t->next;
			head=head->next;
			t->next=head;
		}
		else
		{
			while(t->next!=head && t->next->data!=e)
			t=t->next;
			if(t->next->data==e)
			{
				printf("Deleted : %d",t->next->data);
				t->next=t->next->next;
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

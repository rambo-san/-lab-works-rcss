#include<stdio.h>
#include<stdlib.h>
//linked queue
//what to do
//we need two pointers, front and rear....
struct queue
{
	int data;
	struct queue *next;
};
typedef struct queue queue;
queue *front=NULL;
queue *rear=NULL;
void enqueue(int e)
{
	if(front==NULL)//empty
	{
		front=rear=(queue *)malloc(sizeof(queue);
		rear->data=e;
		rear->next=NULL;
	}
	else//not null
	{
		queue *t;
		t=(queue *)malloc(sizeof(queue);
		t->data=e;
		t->next=NULL;
		rear->next=t;
		rear=t;
	}
}

void dequeue()
{
	if(front==NULL)
	{
		printf("The Queue is Empty");
	}
	else
	{
		printf("Removed : %d",top->data);
		top=top->next;
	}
}
int menu()//the menu function
{
	int ch;
	printf("\nMENU\n1 - PUSH\n2 - POP\n3 - PEEK\n4 - EXIT\nEnter your choice : ");
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
				printf("Enter the num to be Pushed : ");
				scanf("%d",&ch);
				push(ch);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			default:
				printf("\nError: Invalid Input");
		}
		ch=menu();
	}
	printf("Exited Successfully.....");
	return 0;
}

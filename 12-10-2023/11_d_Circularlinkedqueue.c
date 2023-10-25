#include<stdio.h>
#include<stdlib.h>
// circular linked queue
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
		front=rear=(queue *)malloc(sizeof(queue));
		rear->data=e;
		rear->next=rear;
	}
	else//not null
	{
		queue *t;
		t=(queue *)malloc(sizeof(queue));
		t->data=e;
		t->next=front;
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
		printf("Removed : %d",front->data);
		if(front==rear)
			front=rear=NULL;
		else
		front=rear->next=front->next;
		
	}
}
void disp()
{
	if(front==NULL)
	{
		printf("The queue is Empty!");
	}	
	else
	{
		queue *t;
		t=(queue *)malloc(sizeof(queue));
		t=front;
		do{
			printf("%d\t",t->data);
			t=t->next;
		}while(t!=front);
	}
}
int menu()//the menu function
{
	int ch;
	printf("\nMENU\n1 - ENQUEUE\n2 - DEQUEU\n3 - Trav(test)\n4 - EXIT\nEnter your choice : ");
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
				enqueue(ch);
				break;
			case 2:
				dequeue();
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

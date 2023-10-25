#include<stdio.h>
#include<stdlib.h>
//linked stack
//push to top, top-null-ctop, push new->new-top
//structure
struct stack
{
	int data;
	struct stack *next;
};
typedef struct stack stack;
stack *top=NULL;
void push(int e)
{
	if(top==NULL)//empty
{
	top=(stack *)malloc(sizeof(stack));
	top->data=e;
	top->next=NULL;
}
else//not null
{
	stack *t;
	t=(stack *)malloc(sizeof(stack));
	t->data=e;
	t->next=top;
	top=t;
}
}
void peek()
{
	if(top==NULL)
	{
		printf("The Stack is empty\n");
	}
	else{
		printf("%d",top->data);
	}
}
void pop()
{
	if(top==NULL)
	{
		printf("The Stack is Empty");
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

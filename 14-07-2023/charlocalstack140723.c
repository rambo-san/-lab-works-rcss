#include<stdio.h>
int push(char a,int TOP, char ar[])//fn to push char
{
	if(TOP+1 ==5)//check if full
		{
			printf("\nError: The stack is full");
		}
	else
	{
		ar[++TOP]=a;
	}
	return TOP;
}
int pop(int TOP, char ar[])//fn to pop int
{
	if(TOP==-1)//check if empty
	{
		printf("\nError: The stack is empty");
	}	
	else
	{
		printf("\nThe popped Character is %c",ar[TOP--]);
	}
	return TOP;
}
void peek(int TOP, char ar[])//display int at the TOP
{
	if(TOP==-1)
		{
			printf("\nError: The stack is empty");
		}
	else
	{
		printf("The Character at TOP is %c",ar[TOP]);
	}
}
void trav(int TOP, char ar[])
{
	int i;
	if(TOP==-1)
		{
			printf("\nError: The stack is empty");
		}
	else
	{
		for(i=0;i<=TOP;i++)
		{
			printf("[%d] = %c\n",i,ar[i]);
		}
	}
}
int menu()//the menu function
{
	int ch;
	printf("\nMENU\n1 - PUSH\n2 - POP\n3 - PEEK\n4 - TRAVERSE\n5 - EXIT\nEnter your choice : ");
	scanf("%d",&ch);
	return ch;
}
void process()
{
	int TOP=-1,ch;
char ar[5],c;
	ch=menu();
	while(ch!=5)//while use choose other than exit
	{
		switch(ch)
		{
			case 1:
				printf("Enter the Character to be Pushed : ");
			getchar();
				scanf("%c",&c);
				TOP=push(c,TOP,ar);
				break;
			case 2:
				TOP=pop(TOP,ar);
				break;
			case 3:
				peek(TOP,ar);
				break;
			case 4:
				trav(TOP,ar);
				break;
			default:
				printf("\nError: Invalid Input");
		}
		ch=menu();
	}
	printf("Exited Successfully.....");
}
int main()
{
	process();
	return 0;
}

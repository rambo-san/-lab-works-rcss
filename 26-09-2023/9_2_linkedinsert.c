#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node * node;
node head=NULL;
void insertatbegin(int e)
{
    node t;
    if(head==NULL)
    {
        head=(node)malloc(sizeof(struct node));
        head->data=e;
        head->next=NULL;
    }
    else
    {
        t=(node)malloc(sizeof(struct node));
        t->data=e;
        t->next=head;
        head=t;
    }
}
void insertatend(int e)
{
    node t=head;
    if(head==NULL)
    {
        head=(node)malloc(sizeof(struct node));
        head->data=e;
        head->next=NULL;
    }
    else
    {
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=(node)malloc(sizeof(struct node));
        t->next->data=e;
        t->next->next=NULL;
    }
}
void insertatspec(int e, int n)
{
    node t=head;
    if(head==NULL)
    {
        printf("The List is empty: Operation not possible");
    }
    else
    {
        while(t->next!=NULL && t->data!=n)
        {
            t=t->next;
        }
        if(t->data==n)
        {
        	if(t->next==NULL)
        	{
        		t->next=(node)malloc(sizeof(struct node));
       			t->next->data=e;
        		t->next->next=NULL;
			}
			else
			{
				node r=(node)malloc(sizeof(struct node));
				r->data=e;
				r->next=t->next;
				t->next=r;
			}
		}
        else{
        	printf("Element not found!");
		}
    }
}
void display()
{
    node t=head;
    if(head==NULL)
    {
        printf("Empty Linked List!");
    }
    else
    {
        printf("\nLinked List Elements are: ");
        while(t!=NULL)
        {
            printf("%d\t",t->data);
            t=t->next;
        }    
    }
}
int menu()
{
    int ch;
    printf("\nMenu\n_______\nInsert at Begining - 1\nInsert at End - 2\nInsert after element - 3\nDisplay - 4\nExit - 5\nEnter your choice: ");
    scanf("%d",&ch);
    return ch;
}
int main()
{
    int ch,e;
    for(ch=menu();ch!=5;ch=menu())
    {
        switch(ch)
        {
            case 1: printf("\nEnter element to insert: ");
                    scanf("%d",&e);
                    insertatbegin(e);
                    break;
                    
            case 2: printf("\nEnter element to insert: ");
                    scanf("%d",&e);
                    insertatend(e);
                    break;
                    
            case 3: printf("\nEnter element to insert: ");
                    scanf("%d",&e);
                    printf("\nEnter element after to which the new element is to be inserted: ");
                    scanf("%d",&ch);
                    insertatspec(e,ch);
                    break;
                    
            case 4: display();
                    break;
            default:printf("Invalid Entry!");
                    break;
        }
    }
    return 0;
}

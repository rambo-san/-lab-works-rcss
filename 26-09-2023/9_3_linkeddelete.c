#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node * node;
node head=NULL;
void insert(int e)
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
void deletebegin()
{
	if(head==NULL)
	{
		printf("Empty list");
	}
	else
	{
		printf("Deleted : %d",head->data);
		head=head->next;
	}
}
void deleteend()
{
	node t;
	if(head==NULL)
	{
		printf("Empty list");
	}
	else if(head->next==NULL)
	{
		printf("Deleted : %d",head->data);
		head=NULL;
	}
	else
	{
		t=head;
		while(t->next->next!=NULL)
		{
			t=t->next;
		}
		printf("Deleted : %d",t->next->data);
		t->next=NULL;
	}
}
void deletespec(int e)
{
	node t;
	if(head==NULL)
	{
		printf("Empty list");
	}
	else if(head->next==NULL && head->data==e)
	{
		printf("Deleted : %d",head->data);
		head=NULL;
	}
	else if(head->data==e)
	{
		printf("Deleted : %d",head->data);
		head=head->next;
	}
	else
	{
		t=head;
		while(t->next->data!=e && t->next!=NULL)
		{
			t=t->next;
		}
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
    printf("\nMenu\n_______\nInsert- 1\nDelete from Begin - 2\nDelete from End - 3\nDelete Specified Element - 4\nDisplay - 5\nExit - 6\nEnter your choice: ");
    scanf("%d",&ch);
    return ch;
}
int main()
{
    int ch,e;
    for(ch=menu();ch!=6;ch=menu())
    {
        switch(ch)
        {
            case 1: printf("\nEnter element to insert: ");
                    scanf("%d",&e);
                    insert(e);
                    break;
                    
            case 2: deletebegin();
                    break;
                    
            case 3: deleteend();
                    break;
                    
            case 4: printf("Enter the element to be deleted : ");
            		scanf("%d",&e);
					deletespec(e);
                    break;
                    
            case 5: display();
                    break;
            default:printf("Invalid Entry!");
                    break;
        }
    }
    return 0;
}

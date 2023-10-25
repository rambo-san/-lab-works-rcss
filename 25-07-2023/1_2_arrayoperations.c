#include<stdio.h>

int ar[6],n=-1;

void dis()
{
	int i;
	for(i=0;i<=n;i++)
		{
			printf("%d\t",ar[i]);
		}
}

void insert()
{
	int a, pos,i;
	if(n+1==6)
	{
		printf("Error: The array is full\n");
	}
	else
	{
		printf("Enter the Number and Position to insert  : ");
		scanf("%d%d",&a,&pos);
		if(pos>=6)
		{
			printf("Invalid index [>=6]\n");
		}
		else
		{
			for(i=pos-1;i<=n;i++)
				{
					ar[i+1]=ar[i];
				}
				ar[pos-1]=a;
				++n;
		}
	}
}

void del()
{
	if(n==-1)
	{
		printf("Error: The array is empty\n");
	}
	else
	{
		printf("The deleted element is %d",ar[n--]);
	}
}

void search(int a)
{
	int i;
	for(i=0;i<=n;i++)
	{
		if(ar[i]==a)
			printf("The number is found at pos %d\n", i);
		else
			printf("The number is not found\n");
	}
}



void sort()
{
	int i,j,k;
	for(i=0;i<=n;i++)
		{
			for(j=i+1;j<=n;j++)
				{
					if(ar[i]>ar[j])
					{
						k=ar[i];
						ar[i]=ar[j];
						ar[j]=k;
					}
				}
		}
		printf("Array after sorting :\n");
		dis();
}

int choice()
{
	int ch;
	printf("\nMenu\n1 - Insert\n2 - Delete\n3 - Search\n4 - Sort\n5 - Traverse\n6 - Exit\nEnter ur choice : ");
	scanf("%d",&ch);
	return ch;
}
void process()
{
	int ch,l;
	for(ch=choice();ch!=6;ch=choice())
		{
			switch(ch)
			{
				case 1: 
					insert();
					break;
				
				case 2:
					del();
					break;
				
				case 3:
					printf("Enter the num to be searched : ");
					scanf("%d",&l);
					search(l);
					break;
					
				case 4 :
					sort();
					break;
				
				case 5 : 
					dis();
					break;
					
				default :
					printf("Invalid choice\n");
			}
		}
		printf(".....Done.....");
}
int main()
{
	process();
	return 0;
}

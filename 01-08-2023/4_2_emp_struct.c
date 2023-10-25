#include<stdio.h>
#include<string.h>
#define MAXSIZE 20
//this program require a structure that holds employee details and 3 fns
struct employee
{
	int eno, dno;
	char ename[20];
	float esal;
};
//function for searching using the eno
void search(struct employee e[],int m,int eno)
{
	int i,j=0;
	for(i=0;i<m;i++)
	{
		if(eno==e[i].eno)
		{
			printf("The deails of employee are : ");
			++j;
			printf("Eno\tEname\tEsalary\tDno\n");
			printf("%d\t%s\t%f\t%d\n",e[i].eno,e[i].ename,e[i].esal,e[i].dno);
	
		}
	}
	if(j==0)
	{
		printf("The employee not found\n");
	}
}
//next two fn for sorting based off of the eno and name
void sortByesal(struct employee e[], int m)
{
	struct employee temp;
	int i,j;
	for(i=0;i<m;i++){
		for(j=i+1;j<m;j++)
		{
			if(e[i].esal>e[j].esal)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}
	printf("Sorting completed\n");
}
void sortByename(struct employee e[],int m)
{
	struct employee temp;
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(strcmp(e[i].ename,e[j].ename)>0)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}
printf("Sorting completed\n");
}

//next we need to delete an employee
int del(struct employee e[],int m,int eno)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		if(eno==e[i].eno)
		{
			//employee found
			for(j=i;j<m-1;j++)
			{
				e[j]=e[j+1];
			}
			printf("Employee found and deleted\n");
			return(m-1);
		}
	}
	printf("Employee not found\n");
	return(m);
}
int getEmp(struct employee e[],int m)
{
	printf("Enter the details :\nENO :");
	scanf("%d",&e[m].eno);
	printf("ENAME :");
	scanf("%s",e[m].ename);
	printf("SALARY :");
	scanf("%f",&e[m].esal);
	printf("DEPNO  :");
	scanf("%d",&e[m].dno);
	return ++m;
}
void trav(struct employee e[],int m)
{
	int i;
	printf("Eno\tEname\tEsalary\tDno\n");
	for(i=0;i<m;i++)
	{
		printf("%d\t%s\t%f\t%d\n",e[i].eno,e[i].ename,e[i].esal,e[i].dno);
	}
}
int menu()
{
	int ch;
	printf("Menu \n1 - Insert\n2 - Traverse\n3 - Sort By Salary\n4 - Sort By Name\n5 - Search\n6 - Delete\n7 - Exit\n Enter your choice : ");
	scanf("%d",&ch);
	return ch;
}
int main()
{
	struct employee e[MAXSIZE];
	int m=0,ch,en;
	for(ch=menu();ch!=7;ch=menu())
	{
		switch(ch)
		{
			case 1:
				m=getEmp(e,m);
				break;
			case 2:
				trav(e,m);
				break;
			case 3:
				sortByesal(e,m);
				break;
			case 4:
				sortByename(e,m);
				break;
			case 5:
				printf("Enter the eno to be searched : ");
				scanf("%d",&en);
				search(e,m,en);
				break;
			case 6:
				printf("Enter the eno to be deleted : ");
				scanf("%d",&en);
				m=del(e,m,en);
				break;
			default :
				printf("Invaliddddd\n");
		}
	}
	return 0;
}

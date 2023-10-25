#include<stdio.h>
#include<malloc.h>
//so..we need to make a dynamic array...and reduce it until its a single value
//what do we need?get the array...
int n;
void disparray(int *a)
{
	int i;
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
//no reduce it unltil one
void reducetoone(int *a)
{
	int i;
	if(n>1)
	{
		for(i=0;i<n;i++){
				a[i]+=a[i+1];
	}
	n--;
	a=(int *)realloc(a,n*sizeof(int));
		disparray(a);
		reducetoone(a);	
	}
	else
	{
		printf("\nReduced Value: ");
		disparray(a);
	}
}
int main()
{
	int i;
	printf("Enter the size of the array:  ");
	scanf("%d",&n);
	int *ar=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("\nEnter the ar[%d] : ",i);
		scanf("%d",&ar[i]);
	}
	disparray(ar);
	reducetoone(ar);
	free(ar);
	return 0;		
}

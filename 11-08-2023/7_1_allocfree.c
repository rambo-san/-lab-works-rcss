#include<stdio.h>
#include<stdlib.h>
//so this program is a demostrastion of the malloc and calloc functions
int main()
{
	int * ptr;
	int * ptr2;
	int i,n;
	printf("Enter a number : ");
	ptr=(int* )malloc(sizeof(int));
	scanf("%d",ptr);
	printf("The entered number : %d",*ptr);
	n=*ptr;
	printf("\nThe entered number : %d",n);
	ptr2=(int*)calloc(n,sizeof(int));
	
		for(i=0;i<n;i++)
		{
			printf("\nEnter the ptr2[%d] : ",i);
			scanf("%d",&ptr2[i]);
		}
	for(i=0;i<n;i++)
		{
			printf("\nptr2[%d] : %d",i,ptr2[i]);
		}

	free(ptr2);
	free(ptr);
	return 0;
}

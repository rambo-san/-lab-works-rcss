#include<stdio.h>
#include<stdlib.h>
//so this program is a demostrastion of the malloc and calloc functions
int main()
{
	int * ptr;
	int i,n,s=0;
	printf("Enter a number : ");

	scanf("%d",&n);
	ptr=(int* )malloc(n*sizeof(int));
	
		for(i=0;i<n;i++)
		{
			printf("\nEnter the ptr[%d] : ",i);
			scanf("%d",&ptr[i]);
		}
	for(i=0;i<n;i++)
		{
			printf("\nptr[%d] : %d",i,ptr[i]);
			s=s+ptr[i];
		}
	printf("\nThe mean : %d", s/n); 
	free(ptr);
	return 0;
}

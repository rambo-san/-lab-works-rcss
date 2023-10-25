#include<stdio.h>
#include<stdlib.h>
//so this program is a demostrastion of the malloc and calloc functions
int main()
{
	int * ptr;
	int i,j,n,s=0,m,mv,count;
	printf("Enter a number : ");

	scanf("%d",&n);
	ptr=(int* )calloc(n,sizeof(int));
	
		for(i=0;i<n;i++)
		{
			printf("\nEnter the ptr[%d] : ",i);
			scanf("%d",&ptr[i]);
		}
	for(i=0;i<n;i++)
		{
			count=0;
			for(j=0;j<n;j++)
			{
			if(ptr[i]==ptr[j])
				count++;
			}
			if(m<count)
			{
				m=count;
				mv=ptr[i];
			}
		}
	printf("\nThe mode : %d", mv); 
	free(ptr);
	return 0;
}

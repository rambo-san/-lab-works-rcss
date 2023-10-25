#include<stdio.h>
int r, ar1[10][10], ar2[10][10],sum[10][10],diff[10][10],mul[10][10];
void getmatrix()
{
	int i,j;
	printf("Enter the no of rows : ");
	scanf("%d",&r);
	printf("Enter Matrix 1 : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&ar1[i][j]);
		}
	}
		printf("Enter Matrix 2 : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&ar2[i][j]);
		}
	}
}
void addmatrix()
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
		sum[i][j]=ar1[i][j]+ar2[i][j];
		}
	}
		printf("Sum : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",sum[i][j]);
		}
			printf("\n");
	}
}
void submatrix()
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
		diff[i][j]=ar1[i][j]-ar2[i][j];
		}
	}
		printf("\ndifference : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",diff[i][j]);
		}
			printf("\n");
	}
}
void mulmatrix()
{
	int i,j,k;
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<r;j++)    
		{    
			mul[i][j]=0;    
			for(k=0;k<r;k++)    
				{			    
					mul[i][j]+=ar1[i][k]*ar2[k][j];    
				}    
		}    
	}
	printf("\nProduct : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",mul[i][j]);
		}
			printf("\n");
	} 
}
int main()
{
	getmatrix();
	addmatrix();
	submatrix();
	mulmatrix();
	return 0;
}

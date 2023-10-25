#include<stdio.h>
int pol1[10], pol2[10],p1,p2;
//this program is for reading and displayinf two polinomials
void getpoly()
{
	//how to get a polynomial, many ways , but here im gonna stick on to the basic
	int i,t;
	printf("Enter the degree of first poly : ");
	scanf("%d",&p1);
	printf("Enter the degree of second poly : ");
	scanf("%d",&p2);
	printf("Enter the first poly : \n");
	for(i=0;i<p1;i++)
	{
		printf("Enter the coeff. of x^[%d] :",i);
		scanf("%d",&pol1[i]);		
	}
	printf("Enter the second poly : \n");
	for(i=0;i<p2;i++)
	{
		printf("Enter the coeff. of x^[%d] :",i);
		scanf("%d",&pol2[i]);		
	}
}
void putpoly()
{
	int i;
	printf("The first polynomial : ");
	for(i=p1-1;i>=0;i--)
	{
		if(pol1[i]!=0)
		{
			printf("%dx^%d",pol1[i],i);
		}
		if(i!=0 && pol1[i]!=0)
		{
			printf(" + ");
		}
	}
	printf("= 0\nThe Second polynomial : ");	
	for(i=p2-1;i>=0;i--)
	{
		if(pol2[i]!=0)
		{
			printf("%dx^%d",pol2[i],i);
		}
		if(i!=0 && pol2[i]!=0)
		{
			printf(" + ");
		}
	}
	printf(" = 0\n");
}
int main()
{
	getpoly();
	putpoly();
	return 0;
	
}

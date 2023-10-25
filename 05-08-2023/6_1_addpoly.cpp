#include<stdio.h>
int n1,n2;
//so this code, i am gona get two polys using structure...so ya
struct poly
{
	int exp;
	int coeff;
};
int getpoly(struct poly p[])
{
	//so get poly is like degree wise of just enter the exp and coeff
	//degree it is
	int i,t,n;
	printf("Enter the degree of poly : ");
	scanf("%d",&n);
	printf("Enter the poly : \n");
	for(i=0;i<n;i++)
	{
		printf("Enter the coeff. of x^[%d] :",i);
		scanf("%d",&t);	
		if(t!=0)
		{
			p[i].exp=i;
			p[i].coeff=t;
		}	
	}
	return n;
}
void putpoly(struct poly p[], int n)
{
	int i;
	printf("polynomial : \n");
	for(i=n-1;i>=0;i--)
	{
		printf("%dx^%d",p[i].coeff,p[i].exp);
		if(i!=0)
		{
			printf(" + ");
		}
	}
		printf(" = 0\n");
}
int main()
{
	struct poly p1[10],p2[10];
	printf("Poly 1 : \n");
	n1=getpoly(p1);
	printf("Poly 2 : \n");
	n2=getpoly(p2);
	printf("The First ");
	putpoly(p1,n1);
	printf("The Second ");
	putpoly(p2,n2);
	return 0;
}

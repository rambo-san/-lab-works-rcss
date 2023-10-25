#include<stdio.h>
int n1,n2,s;
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
	for(i=0;i<=n;i++)
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
	for(i=n;i>=0;i--)
	{
		printf("%dx^%d",p[i].coeff,p[i].exp);
		if(i!=0)
		{
			printf(" + ");
		} 
	}
		printf(" = 0\n");
}
//so we need to define a function to multiply both the polynomials
/*things to keep in mind: poly* poly means all coeff * all coeff and expo: expo1+expo 2
so we need to pass both the poly as well as both the degrees
and chances are after mul there will be multiple values with same expo..so les go
*/
int mulpoly(struct poly mul[],struct poly p1[], struct poly p2[], int n1, int n2)
{
	int i,j,t=0;
	for(i=0;i<=n1;i++)
	{
		for(j=0;j<=n2;j++)
		{
			t=i+j;
			mul[t].coeff=mul[t].coeff+(p1[i].coeff * p2[j].coeff);
			mul[t].exp=t;
		}
	}
	return n1+n2;
}
int main()
{
	struct poly p1[10],p2[10],mul[10]={
	0};
	printf("Poly 1 : \n");
	n1=getpoly(p1);
	printf("Poly 2 : \n");
	n2=getpoly(p2);
	printf("The First ");
	putpoly(p1,n1);
	printf("The Second ");
	putpoly(p2,n2);
	s=mulpoly(mul,p1,p2,n1,n2);
	printf("The product of the polynomials : \n");
	putpoly(mul
	,s)	;
	return 0;
		
}

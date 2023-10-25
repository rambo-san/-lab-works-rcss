#include<stdio.h>
int p1[10][2],i=0;
int p2[10][2],j=0;
int add[10][2],d=0;
//sub[10][2],pro[10][2];

void getpoly()
{
	//what shd i do
	//first enter the exp and coeff
	int a=1,k;
	printf("Enter the first Polynomial :\n ");
	//how to enter,,,,first ask coeff and then expo
	do{
		printf("Enter the coefficient : ");
		scanf("%d",&p1[i][0]);
		printf("Enter the Exponent : ");
		scanf("%d",&p1[i][1]);
		k=cont();
		if(k==1)
			i++;
		else
			a=0;
	}while(a!=0);
	a=1;
		printf("Enter the Second Polynomial : \n");
	do{
		printf("Enter the coefficient : ");
		scanf("%d",&p2[j][0]);
		printf("Enter the Exponent : ");
		scanf("%d",&p2[j][1]);
		
		//k=cont();
		if(cont())
		
	//	printf("\n%d%d",p2[j][0],p2[j][1]);
			j++;
		else
			a=0;
	}while(a!=0);
}
int cont()
{
	int c;
		printf("Enter 1 to continue , 0 to end : ");
		scanf("%d",&c);
		return c;
		
}
void addpoly()
{
	int n=0,m;
	
	//find higher degree
	int deg;
	deg=getbig();

	d=deg;
	for(;deg>=0;deg--)
	{
			
		m=getcoeffsum(deg);
		if(m==0)
			continue;
		add[n][0]=m;
		add[n++][1]=deg;
	//	printf("%d",m);
	}//while(deg>=-1);
	for(n=0;n<=d;n++){
		printf("%dx^%d",add[n][0],add[n][1]);
		if(n<d)
			printf(" + ");
	}
	printf(" = 0");
	
}
int getcoeffsum(int deg)
{
	int n=0,m=0,l;
	for(l=0;l<=i;l++)
	{
		if(deg==p1[l][1])
			n=n+p1[l][0];
	}
	for(l=0;l<=j;l++)
	{
		if(deg==p2[l][1])
			m=m+p2[l][0];

	}
	return m+n;
}
int getbig()
{
	int max=p1[0][1],n,m;
	for(n=0;n<=i;n++)
	{
		for(m=0;m<=j;m++)
		{
			if(p1[i][1]>p2[j][1])
			{
				max=max>p1[i][1]?max:p1[i][1];
			}
			else
				max=max>p2[i][1]?max:p2[i][1];
		}
	}
	return max;
}
int main()
{
	
	getpoly();
	addpoly();
	return 0;
}

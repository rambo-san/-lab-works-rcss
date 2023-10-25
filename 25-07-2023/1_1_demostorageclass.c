#include<stdio.h>

int a;

int show( int c)
{
	printf("\nVal of Static c in show() after inc: %d\n",c);
	printf("Val of A in show(): %d\n",a);
	register int b=5;
	a=10;
	printf("Val of reg int B before init in show(): %d\n",b);
	return ++b;
}

int main()
{

	int b;
	printf("Val of B before init in main: %d\n",b);
	b=6;
	printf("Val of b after init in main: %d\n",b);
	
	printf("Val of A in Main: %d\n",a);
	static int c;
	printf("Val of Static c before init in main: %d\n\n",c);
	
	printf("Val of inc reg B in main: %d\n",show( c++));
	printf("Val of inc reg B in main: %d\n",show( c++));
	printf("Val of inc reg B in main: %d\n\n",show( c++));
	printf("Val of Static c in main after show completed(+3): %d\n",c);
	
	printf("\nVal of A in main after init: %d\n",a);
	return 0;	
}


#include<stdio.h>

int a;

void show( int c)
{
	printf("Val of Static c in show() after inc: %d\n",c);
	printf("Val of A in show(): %d\n",a);
	register int b;
	printf("Val of reg int B before init in show(): %d\n",b);
}

int main()
{
	printf("Val of A in Main: %d\n",a);
	int b;
	printf("Val of B before init in main: %d\n",b);
	b=6;
	printf("Val of b after init in main: %d\n",b);
	static int c;
	printf("Val of Static c after init in main: %d\n",c);
	show( c++);
	show( c++);
	show( c++);
	return 0;	
}


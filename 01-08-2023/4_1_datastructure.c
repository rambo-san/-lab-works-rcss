#include<stdio.h>
//program to Accept two dates and check whether they are same
//first create a structure
struct date
{
	int day, month, year;
};
void read(struct date *d)
{
	printf("Enter the date in the format (DD/MM/YYYY) : ");
	scanf("%d/%d/%d",&(*d).day,&(*d).month,&(*d).year);
}
void disp(struct date d1, struct date d2)
{
	printf("The dates are : \n%d/%d/%d\n%d/%d/%d\n",d1.day,d1.month,d1.year,d2.day,d2.month,d2.year);
}
void compare(struct date d1,struct date d2)
{
	//checking each parts of date
	if(d1.day==d2.day &&  d1.month==d2.month && d1.year == d2.year)
	{
		printf("The dates are same");
	}
	else
	{
		printf("The dates are different");
	}
}
int main()
{
	struct date d1,d2;
	printf("Enter date 1 : ");
	read(&d1);
	printf("Enter date 2 : ");
	read(&d2);
	disp(d1,d2);
	compare(d1,d2);
}

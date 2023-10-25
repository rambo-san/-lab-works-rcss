#include<stdio.h>

void disp(int ar[], int n) 
{
    printf(" %d |",ar[n]);
    if(n > 0)
        disp(ar, n-1);
}

int main() {

    int ar[40], size, i, item;

    printf("Enter size of array (less than 40) : ");
    scanf("%d", &size);

    for (i = 0; i<size; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &ar[i]);
    } 
    printf("The entered Values in reverse order :\n ");
    disp(ar, size-1);

    return 0;
}
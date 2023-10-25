#include<stdio.h>

void disp(int ar[], int n) {

    if(n > 0)
        disp(ar, n-1);

    printf(" %d |",ar[n]);
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
    printf("The entered Values : ");
    disp(ar, size-1);

    return 0;
}
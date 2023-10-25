#include<stdio.h>

int search(int ar[], int size, int item) {

    int count = 0;
    printf("\nPositions : ");
    for(int i=0; i < size; i++) {
        if(ar[i] == item) {
            printf("%d, ", i+1);
            count++;
        }
    }

    return count;
}
int main() {

    int ar[40], size, i, item;
    char ch;

    printf("Enter size of array (less than 40) : ");
    scanf("%d", &size);

    for (i = 0; i<size; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &ar[i]);
    }

    do {
        int count;
        printf("Enter seach element : ");
        scanf("%d", &item);

        count = search(ar, size, item);
        printf("\n\n %d occurences are there.\n\n", count);

        printf("Do you want to continue (y/n) : ");
        scanf(" %c", &ch);
    }while (ch=='y' || ch=='Y');
    printf("Exiting...");
    return 0;
}
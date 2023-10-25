#include <stdio.h>

int insert(int ar[], int n, int size) {
    if (n == size) {
        printf("Insufficient space ..");
        return;
    }

    printf("Enter the element : ");
    scanf("%d", &ar[n++]);
    
    return n;
}

void sort(int ar[], int n) {
    int i, j,temp;
    for (i = 0; i < n ; i++) {
        for (j = i+1; j < n ; j++) {

            if (ar[i] > ar[j]) {
                
                temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
    }
}

void trav(int ar[], int n) {
    int i;
    printf(" | ");
    for (i = 0; i < n; i++) {
        printf("%d | ", ar[i]);
    }
}

int main() {
    int size;
    printf("Enter size of array (less than 50) : ");
    scanf("%d", &size);

    int ar[50];
    int n = 0;

    int ch;

    do {
        printf("\n\n1.Insert \n2.Sort \n3.Traverse \n4.Exit \nEnter your choice : ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            n = insert(ar, n, size);
            break;

        case 2:
            sort(ar, n);
            break;

        case 3:
            trav(ar, n);
            break;

        default:
            printf("Wrong choice !!\n\n");
        }
    } while (ch!=4);
    printf("Exiting...");
    return 0;
}
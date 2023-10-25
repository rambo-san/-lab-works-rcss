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

int rem(int ar[], int n, int size) {
    int pos, i;

    printf("Enter position to remove : ");
    scanf("%d", &pos);

    if (pos >= n) {
        printf("Invalid position \n");
        return;
    }

    for (i = pos - 1; i < n; i++) {
        ar[i] = ar[i + 1];
    }
    return n - 1;
}

void search(int ar[], int n) {
    int item, i;
    printf("Enter item to search : ");
    scanf("%d", &item);

    for (i = 0; i < n; i++) {
        if (ar[i] == item) {
            printf("Item found at position %d", i + 1);
            return;
        }
    }
    printf("Element not found \n");
}

void sort(int ar[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {

            if (ar[j] > ar[j + 1]) {
                int temp;
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
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
        printf("\n\n1.Insert \n2.Delete \n3.Search \n4.Sort \n5.Traverse \n6.Exit \nEnter your choice : ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            n = insert(ar, n, size);
            break;

        case 2:
            n = rem(ar, n, size);
            break;

        case 3:
            search(ar, n);
            break;

        case 4:
            sort(ar, n);
            break;

        case 5:
            trav(ar, n);
            break;

        default:
            printf("Wrong choice !!\n\n");
        }
    } while (ch!=6);
    printf("Exiting....");
    return 0;
}
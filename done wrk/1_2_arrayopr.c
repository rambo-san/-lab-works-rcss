#include<stdio.h>

int ar[50];
int size;
int n = 0;

void insert() {
	
	if(n == size) {
		printf("Insufficient space ..");
		return;
	}
	
	printf("Enter the element : ");
	scanf("%d", &ar[n++]);
}

void rem() {
	
	int pos, i;
	
	printf("Enter position to remove : ");
	scanf("%d", &pos);
	
	if(pos >= size ) {
		printf("Invalid position \n");
		return;
	}
	
	for(i=pos-1; i<n; i++) {
		ar[i] = ar[i+1];
	}
	n--;
}

void search() {
	
	int item, i;
	printf("Enter item to search : ");
	scanf("%d", &item);
	
	for(i=0; i<=n; i++) {
		if(ar[i] == item) {
			printf("Item found at position %d", i+1);
			return;
		}
	}
	printf("Element not found \n");
}

void sort() {
	
	int i,j;
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-1-i; j++) {
			
			if(ar[j] > ar[j+1]) {
				int temp;
				temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = temp;
			}
		}
	}
}
void trav() {
	int i;
	printf(" | ");
	for(i=0; i<n; i++) {
		printf("%d | ", ar[i]);
	}
}
int main() {
	
	int ch;
	
	printf("Enter size of array (less than 50) : ");
	scanf("%d", &size);
	
	do {
		
		printf("\n\n1.Insert \n2.Delete \n3.Search \n4.Sort \n5.Traverse \n6.Exit \nEnter your choice : ");
		scanf("%d", &ch);
	
		switch(ch) {
		
			case 1: 
				insert();
				break;
				
			case 2: 
				rem();
				break;
		
			case 3:
				search();
				break;
				
			case 4:
				sort();
				break;
		
			case 5: 
				trav();
				break;
				
			default:
				printf("Wrong choice !!\n\n");
		}
	}while(ch!=6);
		printf("Exiting !!\n\n");

}
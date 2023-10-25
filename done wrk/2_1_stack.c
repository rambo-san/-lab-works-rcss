#include<stdio.h>
#define SIZE 30
int stack[SIZE];
int top = -1;

void push() {
    if(top + 1 == SIZE) {
        printf("ERROR : Stack overflow!! \n");
        return;
    }
    printf("Enter the element : ");
    scanf("%d", &stack[++top]);
}
int pop() {
    if(top == -1) {

        printf("ERROR : Stack underflow!! \n");
        return 0;
    }
    return stack[top--];
}
int peek() {
    
    if(top == -1) {
        printf("WARNING : Stack empty");
        return 0;
    }
    return stack[top];
}
int main() {

    int ch,item;
    do {

        printf("1.Push \n2.Pop \n3.Peek \n4.Exit \nEnter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                push();
                break;

            case 2:
                printf("Pop returned : %d\n", pop());
                break;

            case 3:
                printf("Peek returned : %d\n", peek());
                break;

            default:
                printf("Wrong choice!\n\n");
        }

    }while (ch != 4);
    printf("Exiting...");
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct books
{
    char bookname[20], authorname[20];
};
typedef struct books books;
int read_no()
{
    int n;
    printf("\nEnter number of books: ");
    scanf("%d",&n);
    return n;
}
void readbooks(books *ptr, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter %d Book Name: ",i+1);
        scanf(" %s",ptr[i].bookname);
        printf("Enter Author Name: ");
        scanf(" %s",ptr[i].authorname);
    }
}
void disp(books *ptr, int n)
{
    int i;
    printf("\nBook Details\n------------");
    for(i=0;i<n;i++)
    {
        printf("\nBook %d\nBook Name: %s\nAuthor Name: %s",i+1,ptr[i].bookname,ptr[i].authorname);
    }
}
int main()
{
    books *ptr;
    int n;
    n=read_no();
    ptr=(books *)calloc(n,sizeof(books));
    readbooks(ptr,n);
    disp(ptr,n);
    free(ptr);
    return 0;
}


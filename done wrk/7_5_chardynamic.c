#include <stdio.h>
#include<malloc.h>

char* get_varchar_input() {
    
    char input;
    int size = 1;
    char *varchar = (char*) malloc(sizeof(char));
    
    do {
        
        scanf("%c", &input);
        varchar = (char*) realloc(varchar, size * sizeof(char));
        if(input == '\n') {
            varchar[size-1] = '\0';
            break;
        }
        varchar[(size++)-1] = input;
        
    }while(1);
    
    return varchar;
}
int main()
{


    char *varchar;
    
    printf("Enter a string : ");
    
    varchar = get_varchar_input();
    
    printf("\n%s", varchar);
    
    free(varchar);

    return 0;
}

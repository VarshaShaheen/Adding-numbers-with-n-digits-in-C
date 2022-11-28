#include <stdio.h>
#include <stdlib.h>

int main(){
    int *array_ptr,i=1;
    char c;
    array_ptr = malloc(sizeof(int));
    scanf("%c",&c);

    while(c != '\n'){
        array_ptr= realloc(array_ptr,i*sizeof(int));
        *(array_ptr + (i-1))= c - '0';
        scanf("%c",&c);
        i++;
    }
    for(int j=0;j<i-1;j++){
        printf("%d",*(array_ptr+j));
    }
    free(array_ptr);
}

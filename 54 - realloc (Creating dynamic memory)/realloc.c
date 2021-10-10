// Create a C Program of Dynamic Memory Allocation using malloc function...

#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
    int i;

    ptr = (int *) malloc(4 * sizeof(int));    // --> it will return void pointer... so do typecasting in pointer type...

    printf("\n");
    for(i=0; i<4; i++){
        printf("Enter the value of Element %d --> ",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for(i=0; i<4; i++){
        printf("\nValue in Element %d --> %d",i+1,ptr[i]);
    }

    // Reallocate memory of ptr using realloc()...
    ptr = realloc(ptr, 6*sizeof(int));        // That is format of realloc to allocate it...
    printf("\n\n");
    for(i=0; i<6; i++){
        printf("Enter the value of Element %d --> ",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for(i=0; i<6; i++){
        printf("\nValue in Element %d --> %d",i+1,ptr[i]);
    }
    return 0;
}

// Here we stored values of elements in Dynamic memory...
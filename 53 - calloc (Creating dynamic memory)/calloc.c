// Create a C Program of Dynamic Memory Allocation using calloc function...

#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
    int i;

    // calloc taking multiple arguments...
    ptr = (int *) calloc(5, sizeof(int));    // --> it will return void pointer... so do typecasting in pointer type...

    // calloc initializes each memory block with a default value of 0...
    printf("\n");
    for(i=0; i<5; i++){
        printf("\nValue in Element %d --> %d",i+1,ptr[i]);
    }
    return 0;
}

// Here we stored values of elements in Dynamic memory...
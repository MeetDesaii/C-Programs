// Write a program to print the value of a variable i by using "Pointer to Pointer" type of variable...

#include<stdio.h>

int main(){

    int i = 33;
    int *ptr;
    int **ptr_2_ptr;

    ptr = &i;
    ptr_2_ptr = &ptr;

    printf("\nValue of i : %d",i);
    printf("\nValue of i : %d",*ptr);
    printf("\nValue of i : %d",**ptr_2_ptr);   // Printing value of i using Pointer to Pointer...
    return 0;
}

// Here, We can Clear our Concept in Pointers...
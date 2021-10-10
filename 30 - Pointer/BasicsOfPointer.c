// Create a C Program to explain basic fundamentals of pointer...

#include<stdio.h>

int main(){

    int i = 4;
    int *j = &i;
    int **k = &j;               // Pointer to pointer...

    printf("\nThe value of i : %d",i);
    printf("\nThe value of i : %u",*j);
    printf("\nThe value of i : %u",*(&i));
    printf("\nThe address of i : %u",&i);
    printf("\nThe address of j : %u",&j);
    return 0;
}

// We can use %u instead of %d for Addresses...

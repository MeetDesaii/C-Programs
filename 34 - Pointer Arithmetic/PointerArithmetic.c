// Write a C Program to understand fundamental of Pointer Arithmetic...

#include<stdio.h>

int main(){

    int m = 3;
    char ch = 'M';
    int *ptr = &m;
    char *ptr2 = &ch;

    // For Integer...
    printf("\nThe Address of m : %d",ptr);
    ptr++;                                  // Incrementing Pointer...
    printf("\nThe incremented Address of m : %d",ptr);
    ptr--;
    printf("\nThe decremented Address of m : %d",ptr);

    // For Character...
    printf("\n\nThe Address of ch : %d",ptr2);
    ptr2++;
    printf("\nThe incremented Address of ch : %d",ptr2);

    return 0;
}

/* If we are incrementing address of m so it will increment by +4 (because of int)
   size of 1 block of int : 4 bytes... that's why it'll increment by +4... 

   int = 4 Bytes
   float = 4 Bytes
   double = 8 Bytes
   char = 1 Bytes
*/
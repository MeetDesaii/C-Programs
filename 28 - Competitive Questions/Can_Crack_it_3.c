// Write a C Program to do increment in const variable...

#include<stdio.h>

int main(){

    const int a = 7;
    int *ptr; 
    ptr = &a;

    // a++; --> This will show you error...
    printf("\nThe value of a (before increment): %d", a);

    ++(*ptr);
    printf("\nThe value of a (after increment) : %d",a);
    return 0;
}

// This is complicated program because we are changing the value of const int... Using pointer we can access it... Pointer is the most important topic in C language...
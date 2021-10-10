// Write a C Program to Swap two numbers using pointer...

#include<stdio.h>
void swap(int *,int *);

int main(){

    int a,b;
    printf("\n\t\t\t*** Numbers before Swapping ***");
    printf("\nEnter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);

    swap(&a,&b);                  // Call by Reference...

    printf("\n\t\t\t*** Numbers after Swapping ***");
    printf("\nFirst Number : %d\nSecond Number : %d",a,b);
    return 0;
}

void swap(int *x,int *y){
    int temp = *x;      // Logic of Swapping...
    *x = *y;
    *y = temp;
}

// We should Use Pointer for Swapping two numbers using functions...


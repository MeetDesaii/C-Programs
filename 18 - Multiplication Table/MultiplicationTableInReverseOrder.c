// Create a C program to print Multiplication table in Reverse order of given number...

#include<stdio.h>

int main(){

    int i=1,n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    printf("\n\t\t\t*** Multiplication Table is here ! ***\n");
    for(i=10 ; i ; i--){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}

// Changing For Loop conditions & Multiplication table in reverse order is here !
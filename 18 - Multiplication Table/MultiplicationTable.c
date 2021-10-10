// Create a C program to print Multiplication table of given number...

#include<stdio.h>

int main(){

    int i,n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    printf("\n\t\t\t*** Multiplication Table is here ! ***\n");
    for(i=1; i<=10 ;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}
// Write a C Program to calculate a factorial of given number using While loop...

#include<stdio.h>

int main(){

    int i=1, n, fact=1;

    printf("Enter a Number : ");
    scanf("%d",&n);

    while(i<=n){
        fact *= i;
        i++;
    }    
    printf("Factorial of %d is %d",n,fact);

    return 0;
}

// This is so Tricky and Competitive Program for Programmers...
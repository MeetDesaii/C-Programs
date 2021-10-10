// Write a C Program to calculate a factorial of given number using For loop...

#include<stdio.h>

int main(){

    int i=1,n,fact=1;        // Must need to set Initial value of fact --> 1 

    printf("Enter a Number : ");
    scanf("%d",&n);

    for(i=n; i; i--){
        fact *= i;
    }
    printf("Factorial of %d is %d",n,fact);
    return 0;
}


// This is so Tricky and Competitive Program for Programmers...
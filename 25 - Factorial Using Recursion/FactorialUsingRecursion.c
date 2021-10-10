// Create a C Program to Calculate Factorial of given number using Recursion...

#include<stdio.h>
int factorial(int);

int main(){

    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);

    int fact = factorial(x);

    printf("\nFactorial of %d is %d",x,fact);
    return 0;
}

int factorial(int n){

    if(n==1 || n==0){
        return 1;
    }
    else{
        return n * factorial(n-1);          // --> Recursion (Function Calls itself...)
    }
} 


// This is so Tricky and Competitive Program for Programmers...
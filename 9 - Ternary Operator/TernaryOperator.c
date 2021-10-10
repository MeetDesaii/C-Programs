// Create a C Program to know about fundamentals of Ternary Operator(Conditional Operator)...

#include<stdio.h>

int main(){

    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);

    (num>=0) ? printf("Number is Positive...") : printf("Number is Negative...");  // Ternary Operator...
    return 0;
}
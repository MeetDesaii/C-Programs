// Create a program to check whether a Number is Even or Odd...

#include<stdio.h>

int main(){

    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);

    if(num%2 == 0){     // Where % is Modulo Operator which will return Remainder...
        printf("Number is Even...");
    }
    else{
        printf("Number is Odd...");
    }
    return 0;
}
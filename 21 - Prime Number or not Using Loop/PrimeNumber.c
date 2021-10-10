// Write a C Program to Check Whether given number is prime or not ?...
// Prime Number : A Number that is divisible only by itself and 1...

#include<stdio.h>

int main(){

    int i, n;
    int prime = 1;

    printf("Enter a Number : ");
    scanf("%d",&n);

    for(i=2; i<n; i++){
        if(n%i == 0){              // Logic of program...
            prime = 0;
            break;
        }
    }

    if(prime == 0 && n!=2){
        printf("This is not a Prime Number...");
    }
    else{
        printf("This is a Prime Number...");
    }
    return 0;
}

// This is not a best way to identify a number is Prime or not? but Using Loops --> this is good...

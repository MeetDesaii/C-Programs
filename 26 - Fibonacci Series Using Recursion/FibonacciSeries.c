// Write a Program using Recursion to calculate nth element of Fibonacci Series...

#include<stdio.h>
int fibonacci(int);

int main(){

    int x;
    printf("\nEnter an Index for Fibonacci Element : ");
    scanf("%d",&x);

    printf("\nElement on %d index is %d",x,fibonacci(x));
    return 0;
}

int fibonacci(int n){

    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

// This is so Tricky and Competitive Program for Programmers...
// Write a Recursive function to calculate the sum of first n natural numbers...

#include<stdio.h>
int sumN(int);

int main(){

    int x;
    printf("\nEnter a Number (for sum of First n Natural Numbers) : ");
    scanf("%d",&x);
    printf("\nSum of first %d Natural numbers : %d",x,sumN(x));
    return 0;
}

int sumN(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+sumN(n-1);
    }
}
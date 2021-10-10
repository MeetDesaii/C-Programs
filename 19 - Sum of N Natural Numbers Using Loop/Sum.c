// Write a C program to Sum of N Natural numbers using loop...

#include<stdio.h>

int main(){

    int i, n, sum=0;
    
    printf("Enter a Natural Number : ");
    scanf("%d",&n);
    for(i=0; i<=n; i++){
        sum += i;
    }
    printf("Sum of first %d Natural Numbers : %d",n,sum);

    return 0;
}

// This is so Tricky and Competitive Program for Programmers...
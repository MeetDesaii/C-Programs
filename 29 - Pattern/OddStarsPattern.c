/* Write a program using functions and recursion to print the following pattern (First n lines)...
   
   *
   ***
   *****
*/

#include<stdio.h>
void pattern(int);

int main(){

    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}

void pattern(int n){

    if(n==1){
        printf("*\n");
        return;
    }

    pattern(n-1);                  // --> Recursion...

    for(int i=0; i<(2*n-1); i++){           // (2n-1) will return odd number...
        printf("*");
    }
    printf("\n");
}
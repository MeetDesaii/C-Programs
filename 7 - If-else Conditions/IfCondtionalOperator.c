// Create a basic program to understand if-else conditional operator...

#include<stdio.h>

int main(){
    float num;
    printf("Enter a Number : ");
    scanf("%f",&num);

    if(num>=0){               //--> Where num>=0 is a Condition...
        printf("Your Number is Positive...");
    }
    else{
        printf("Your Number is Negative...");
    }
    return 0;
}
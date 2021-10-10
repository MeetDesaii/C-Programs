// Write a C program to check that entered Character is in Lower Case or not --> Using ASCII Values...

#include<stdio.h>

int main(){

    char c;
    printf("Enter a Character : ");
    scanf("%c",&c);

    if(c>=97 && c<=122){
        printf("This Character is in Lower Case...");
    }
    else{
        printf("This Character is not in Lower Case...");
    }
    return 0;
}

// Where ASCII Value of Lower Case Characters are 97 to 122...
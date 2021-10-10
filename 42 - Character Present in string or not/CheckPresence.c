// Write a program to check whether a given character is present in a string or not...

#include<stdio.h>

int main(){

    char str[100];
    char *ptr = str;
    char c;
    int i;
    int isPresent = 0;
    int count = 0;

    printf("\nEnter a String : ");
    gets(str);

    printf("\nEnter a character (Only 1 character is valid) to check presence : ");
    scanf("%c",&c);          // If we are using scanf("%s",str) so we need to add fflush(stdin) before this scanf...

    while(*ptr!='\0'){
        if(*ptr == c){
            count++;
            isPresent = 1;
        }
        ptr++;
    }

    if(isPresent == 1){
        printf("\nThis character is present (%d times) in this string...",count);
    }
    else{
        printf("\nThis character is not present in this string...");
    }
    
    return 0;
}


// This program is very tricky and competitive for programming...
// Use Library functions of String and clear all fundamentals about it...

#include<stdio.h>
#include<string.h>

int main(){

    char str1[100] = "Meet - The Programmer";
    char str2[100];
    char str3[100] = "(CodeXBlackPearl)";

    // strlen() --> To get length of String...
    int str1_length = strlen(str1);
    int str3_length = strlen(str3);
    printf("\nLength of the str1 : %d",str1_length);
    printf("\nLength of the str1 : %d",str3_length);

    // strcpy() --> To copy the content...
    strcpy(str2,str1);
    printf("\nCopied String : %s",str2);

    // strcat() --> To concatenate two strings...
    printf("\nMerged String : %s",strcat(str1,str3));
    
    // strrev() --> To reverse a String...
    printf("\nReversed String : %s",strrev(str3));

    return 0;
}

// So, Here you can see some Standard Library functions for string... for more you can search on google and get information about more functions...
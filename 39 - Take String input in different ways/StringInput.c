// Write a program to take string as an input from the user using %c & %s. Confirm that the strings are equal...

#include<stdio.h>
#include<string.h>

int main(){

    char str1[10];
    char str2[10];
    char c;
    int i=0;

    // will print a String using %s...
    printf("\n1.Enter the value of first string : ");
    scanf("%s",str1);
    

    // will print a String using %c...
    printf("\n2.Enter the value of second string (Character by character) : ");
    while(c!='\n'){
        fflush(stdin);         // if we are using scanf in loop for many times so fflush(stdin) can be important in that 
        scanf("%c",&c);
        str2[i] = c;
        i++;
    }
    str2[i-1] = '\0';     // str2[i-1] --> because str2 have one extra '\n' character.          

    printf("\nFirst String : %s",str1);
    printf("\nSecond String : %s",str2);

    printf("\nThese 2 Strings are same : %d",strcmp(str1, str2));
    
    return 0;
}

// If strings are same so strcmp() will print return 0...
// This program is so competitive...
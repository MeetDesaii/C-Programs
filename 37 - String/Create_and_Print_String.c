// Create a C Program to create and print String...

#include<stdio.h>

int main(){

    /* 1st way to create & print String :
       char str[] = {'M','E','E','T','\0'};   
       --> '\0' is a Null Character which shows that Array of characters finished here !    
       printf("%s",str);    
    */

    /* 2nd way to create & print String :
       char str[] = "Meet";
       char *ptr = str;             --> Pointer points String 
       while(*ptr != '\0'){
           printf("%c",*ptr);
           ptr++;
       }
    */
   
    char str[] = "Meet - The Programmer";
    printf("\n%s",str);
    // We can declare string using pointer variable also...

    return 0;
}

// So we can create and print Strings in different ways in C Programming like this...


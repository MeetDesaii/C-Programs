// Create a C Program to take String input from user and define why gets() and puts() are important...

#include<stdio.h>

int main(){

    char str[100];
    printf("Enter your name : ");
    gets(str);
    printf("\nMr. %s, Have a good day !",str);
    return 0;
}

/* --> When we're using scanf() to take input String from user...
   Code:
        printf("Enter your name : ");
        scanf("%s",str); 
        printf("\nMr. %s, Have a good day !",str);       
   Output: 
        Enter your name : Meet Desai
        Mr. Meet, Have a good day !     

   --> When we're using gets() to take input String from user...
   Code:
        printf("Enter your name : ");
        gets(str); 
        printf("\nMr. %s, Have a good day !",str);       
   Output: 
        Enter your name : Meet Desai
        Mr. Meet Desai, Have a good day !      

    --> puts() also useful to print string, it will put cursor in next line.

    --> So, here we can see difference between scanf() and gets()...

    --> Understand the fundamentals of [ fflush(stdin) ] in C Programming form Google...
*/
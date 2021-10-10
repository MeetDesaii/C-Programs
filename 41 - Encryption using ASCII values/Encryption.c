// Write a program to encrypt a string by adding 7 to the ascii value of its characters...

#include<stdio.h>
void encrypt(char *str);

int main(){

    char str[100];

    printf("\nEnter a message : ");
    gets(str);

    encrypt(str);

    printf("\nEncrypted message : %s",str);

    return 0;
}

void encrypt(char *str){
    char *ptr = str;

    while(*ptr!='\0'){
        *ptr = *ptr + 7;      //--> it will change with +7 ASCII Value...
        ptr++;
    }
}


// This is so Tricky and Competitive Question for improve programming skills...

// We can Decrypt the code also using this type of code but we must know that with which value we need to do substract by ASCII values...
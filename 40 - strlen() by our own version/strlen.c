// create a C program by your own version which will return a length of the String...

#include<stdio.h>
int strlen(char *str);

int main(){

    char str[100];
    printf("\nEnter your full name : ");
    gets(str);
    printf("\nLength of your String : %d",strlen(str));
    
    return 0;
}

int strlen(char *str){

    int length=0;
    char *ptr = str;
    while(*ptr!='\0'){
        length++;
        ptr++;
    }
    return length;
}

// This is so tricky and competitive Question for programming & coding interview...
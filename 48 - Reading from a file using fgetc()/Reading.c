// Write a C Program to read from a file using fgetc()...

#include<stdio.h>

int main(){

    FILE *ptr;
    char c;
    ptr = fopen("sample2.txt", "r");

    while(c!=EOF){            // EOF --> End of file...
        printf("%c",c);
        c = fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}

// So like this, we can read a file using loop until there is not end of file...

// fputc() used to write a character in a file...
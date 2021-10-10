// Create a C program to write in file using programming using fprintf()...

#include<stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("sample.txt","w");
    fprintf(ptr, "\n\t\t\t\t\t*** CodeXBlackPearl ***\n\n--> I am Meet Desai and Here you're doing coding with CodeXBlackPearl... If you want to do work with us so first of all, You should become able to do competitive programming... work hard, work hard and do rock with your programming skills... Thanks to give your important time to us...");
    fclose(ptr);

    return 0;
}

// We can read from a file using fscanf()... [For integer, For float, For double]
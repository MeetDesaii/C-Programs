/* Write a program to generate multiplication table of a given number 
   in text format. Make sure that the file is readable and well formatted...
*/

#include<stdio.h>

int main(){

    int num ,i;
    FILE *ptr;
    ptr = fopen("Table.txt", "w");

    printf("\nEnter a number : ");
    scanf("%d",&num);

    fprintf(ptr, "\t\t*** Multiplication Table of %d ***\n",num);
    for(i=1; i<=10 ;i++){
        fprintf(ptr, "%d X %d = %d\n",num,i,num*i);
    }

    fclose(ptr);
    printf("\nMultiplication table generated successfully in file...");
    return 0;
}
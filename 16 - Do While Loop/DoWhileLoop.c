// Create a C Program to print first 100 even numbers using Do While Loop...

#include<stdio.h>

int main(){

    int i = 0;
    do{
        printf("%d\n",2*i);
        i++;
    }
    while(i<100);           // Must need Semi Colon in Do While Loop...

    return 0;
}


/*Difference Between While and Do While Loop...
  While Loop --> Checks the condition & then executes the code...
  Do While Loop --> Executes the code & then Checks the condition...
*/
/* Write a program to change the value of a variable to ten times of its 
   current value. Write a function & pass the value by Reference...
*/

#include<stdio.h>
int changeValue(int *);

int main(){

    int a = 10;
    printf("\nValue of a is : %d",a);
    printf("\nMultiplied value of a is : %d",changeValue(&a));     // Value by Reference...

    return 0;
}

int changeValue(int *a){
    int temp = 10*(*a);
    return temp;
}
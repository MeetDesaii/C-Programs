// Write a C Program to Create Array and Store int Values in that array...

#include<stdio.h>

int main(){

    int arr[10] = {1,11,21,31,41,51,61,71,81,91};
    int i;

    // We can add values in array like this way also...
    // arr[0] = 1;
    // arr[1] = 11;
    // arr[2] = 21;
    // arr[3] = 31;
    // arr[4] = 41;
    // arr[5] = 51;
    // arr[6] = 61;
    // arr[7] = 71;
    // arr[8] = 81;
    // arr[9] = 91;

    for(i=0; i<=9 ;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}
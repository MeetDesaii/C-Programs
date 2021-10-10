// Write a C Program to print array in reverse order using pointers & functions...

#include<stdio.h>
void reverseArray(int *, int length);

int main(){

    int a[5] = {20, 40, 60, 80, 100};
    int *point, length, i;
    point = a;
    length = sizeof(a)/sizeof(int);     // Logic to calculate length of array...
    
    printf("\n\t\t\t *** Array in Normal Order ***\n\n");
    for(i=0; i<length ;i++){
        printf("%d\t",a[i]);
    }

    reverseArray(point, length);        

    printf("\n\t\t\t *** Array in Reverse Order ***\n\n");
    for(i=0; i<length ;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}

void reverseArray(int *point, int length){
    int i;
    for(i=0; i<(length/2) ;i++){
        int temp = point[i];
        point[i] = point[length-i-1];
        point[length-i-1] = temp;
    }
}


// This is so Tricky and Competitive Program for Programmers...

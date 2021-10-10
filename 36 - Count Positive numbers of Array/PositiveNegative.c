// Write a C Program to count Positive & Negative numbers from an Array...

#include<stdio.h>

int main(){

    int nums[15] = {-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7,8,9};
    int countPositive = 0;
    int countNegative = 0;
    int i;
    int length = sizeof(nums)/sizeof(int);

    for(i=0; i<length ;i++){
        if(nums[i]>0){
            countPositive++;
        }
    }

    for(i=0; i<length ;i++){
        if(nums[i]<0){
            countNegative++;
        }
    }

    printf("Array : ");
    for(i=0; i<length ;i++){
        printf("%d  ",nums[i]);
    }

    printf("\nLength of this array : %d\n",length);
    printf("\nIn this array, there are %d Positive numbers...",countPositive);
    printf("\nIn this array, there are %d Negative numbers...",countNegative);

    return 0;
}


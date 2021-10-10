// Write a C program to explain fundamental to do Binary search in array... (Linear Search : The search continuos towards either side of mid based on whether the element to be searched is lesser or greater than mid...) (Array must be sorted).

#include<stdio.h>

void binarySearch(int arr[], int element, int l){
    int low = 0;
    int high = l-1;
    int present=0;
    int elementIndex;

    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] == element){
            present = 1;
            elementIndex = mid;
            break;
        }
        else if(arr[mid] < element){
            low = mid + 1;                //--> Understand this logic as your way by draw a diagram...
        }
        else{
            high = mid - 1;
        }
    }

    if(present == 1){
        printf("\n%d is present in the array...",element);
        printf("\n%d element is present in Array on index %d",element, elementIndex);
    }
    else if(present == 0){
        printf("\n%d is not present in the array...",element);
    }
}

int main(){

    int arr[] = {3,7,18,33,45,58,67,75,92,100,109,117,125,133,147};
    int element;

    int length = sizeof(arr)/sizeof(int);

    printf("\nEnter an Element to check presence in array : ");
    scanf("%d", &element);

    binarySearch(arr, element, length);

    return 0;
}

// This is a concept of binary search... Array must be sorted otherwise your program will give wrong outputs...

// Important : If this is hard to understand, so understand it using diagram and clear all doubts...

// In binary search... We are doing three part of array -> low, mid, high...
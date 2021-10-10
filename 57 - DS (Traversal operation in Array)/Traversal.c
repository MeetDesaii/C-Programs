// Create a C program to do Traversal operation in Array in Data structure...

#include<stdio.h>

void Traversal(int arr[], int elements){
    for(int i=0; i < elements; i++){
        printf("\nElement on index %d : %d", i, arr[i]);
    }
}

int main(){

    int arr[] = {3,7,11,17,19};
    Traversal(arr, 5);

    return 0;
}

// Traversal operation in Array means travelling in Array index by index...
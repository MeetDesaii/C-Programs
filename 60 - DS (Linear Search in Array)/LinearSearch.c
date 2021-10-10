// Write a C program to explain fundamental to do linear search in array... (Linear Search : Searches for an element by visiting all the elements sequentially until the element is found...) (Array can be sorted or unsorted).

#include<stdio.h>

void linearSearch(int arr[], int element, int l){
    int present=0;
    int elementIndex;

    for(int i=0; i<l; i++){
        if(arr[i] == element){
            present = 1;
            elementIndex = i;
            break;
        }
        else{
            present = 0;
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

    int arr[] = {3,27,18,33,58,45,67,75,100,92};
    int element;

    int length = sizeof(arr)/sizeof(int);

    printf("\nEnter an Element to check presence in array : ");
    scanf("%d", &element);

    linearSearch(arr, element, length);

    return 0;
}

// This is a logic of Linear Search... 

/* Important Information :-

   in Linear search, array can be sorted of unsorted...
   in Binary search, array can be sorted only...

   --> best real life example for Linear search in Array
            * You have one deck of card and found 4 heart cards...
   --> best real life example for Binary search in Array
            * You have a book of 1000 pages and open 250th page of book...
*/


// Create a C Program to store elements using Array ADT which have total size, used size and one pointer which points that Array... (Create memory using Dynamic Memory Allocation)

#include<stdio.h>
#include<stdlib.h>

typedef struct myArray{            // We created ADT here!...
    int total_size;
    int used_size;
    int *ptr;
}myArray;

void createArray(myArray* arr, int totalSize, int usedSize){
    (*arr).total_size = totalSize;
    (*arr).used_size = usedSize;
    (*arr).ptr = (int*) malloc(totalSize * sizeof(int)); 

    /* We can define like this also instead of above declaration...(-> is Arrow an Arrow operator)
       arr -> total_size = totalSize;
       arr -> used_size = usedSize;
       arr -> (int*) malloc(totalSize * sizeof(int));
    */
}

void showArray(myArray *arr){
    for (int i = 0; i < (*arr).used_size; i++){
        printf("Element on index %d : %d\n", i, ((*arr).ptr)[i]);
    }
} 

void setValues(myArray *arr){
    int n;
    for (int i = 0; i < (*arr).used_size; i++){
        printf("Enter an Element : ");
        scanf("%d", &n);       
        ((*arr).ptr)[i] = n;
    }
}

int main(){

    myArray students;
    createArray(&students, 15, 7);
    printf("\n");
    setValues(&students);
    printf("\n");
    showArray(&students);
 
    return 0;
}

// This is so complicated program which depends on your data structure knowledge...
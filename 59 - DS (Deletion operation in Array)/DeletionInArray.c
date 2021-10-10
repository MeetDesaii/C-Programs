// Create a C program to do Deletion operation in Array in Data structure...

#include<stdio.h>
#include<stdlib.h>

typedef struct deletionArray{
    int total_RollNum;
    int reserved_RollNum;
    int *p;
}dArray;

void createArray(dArray* studentArr, int tRollNum, int rRollNum){
    studentArr -> total_RollNum = tRollNum;
    studentArr -> reserved_RollNum = rRollNum;
    studentArr -> p = (int*) malloc(rRollNum * sizeof(int));
}

void reservedArray(dArray* studentArr){
    (studentArr -> p)[0] = 34;
    (studentArr -> p)[1] = 17;
    (studentArr -> p)[2] = 9;
    (studentArr -> p)[3] = 40;
    (studentArr -> p)[4] = 56;
    (studentArr -> p)[5] = 27;
    (studentArr -> p)[6] = 1;
}

void deletionArray(dArray* studentArr, int indexOfRollNum){

    int i;
    
    if(indexOfRollNum == ((studentArr -> reserved_RollNum)-1)){
        (studentArr -> p)[(studentArr -> reserved_RollNum)-1] = (int) NULL;
    }
    else if(indexOfRollNum >= (studentArr -> reserved_RollNum) || indexOfRollNum < 0){
        printf("Enter a valid Input...");
    }
    else{
        for(i=indexOfRollNum; i<=((studentArr -> reserved_RollNum)-1); i++){
            (studentArr -> p)[i] = (studentArr -> p)[i+1];
        }
        (studentArr -> p)[(studentArr -> reserved_RollNum)-1] = (int) NULL;
    }
}

void printingArray(dArray* studentArr){
    for(int i=0; i<(studentArr -> reserved_RollNum); i++){
        printf("\nElement on %d index : %d", i, (studentArr -> p)[i]);
    }
}

int main(){

    dArray studentEntry;
    int indexStudent;

    createArray(&studentEntry, 100, 7);
    reservedArray(&studentEntry);

    printf("\nEnter an index of roll number to delete : ");
    scanf("%d",&indexStudent);

    deletionArray(&studentEntry, indexStudent);

    printf("\n\n\t\t\t\t*** Updated Array ***");

    printingArray(&studentEntry);

    return 0;
}

// This is so Logical and complicated Program... It's a program of data structure, & If you want to create this program as your logic and knowledge of coding so you need to create algorithm or rough planning for this program...
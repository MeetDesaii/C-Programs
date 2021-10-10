// Create a C program to do Insertion operation in Array in Data structure...

#include<stdio.h>
#include<stdlib.h>

typedef struct insertionArray{
    int total_RollNum;
    int reserved_RollNum;
    int *p;
}iArray;

void createArray(iArray* studentArr, int tRollNum, int rRollNum){
    studentArr -> total_RollNum = tRollNum;
    studentArr -> reserved_RollNum = rRollNum;
    studentArr -> p = (int*) malloc(rRollNum * sizeof(int));
}

void reservedArray(iArray* studentArr){
    (studentArr -> p)[0] = 34;
    (studentArr -> p)[1] = 17;
    (studentArr -> p)[2] = 9;
    (studentArr -> p)[3] = 40;
    (studentArr -> p)[4] = 56;
    (studentArr -> p)[5] = 27;
    (studentArr -> p)[6] = 1;
}

void insertionArray(iArray* studentArr, int rollNum, int indexOfRollNum){

    (studentArr -> reserved_RollNum)++;

    int i;
    
    if(indexOfRollNum == ((studentArr -> reserved_RollNum)-1)){
        (studentArr -> p)[(studentArr -> reserved_RollNum)-1] = rollNum;
    }
    else if(rollNum <= 0 || indexOfRollNum >= (studentArr -> reserved_RollNum) || indexOfRollNum < 0){
        printf("Enter a valid Input...");
    }
    else{
        for(i=((studentArr -> reserved_RollNum)-1); i>=indexOfRollNum; i--){
            (studentArr -> p)[i] = (studentArr -> p)[i-1];
        }
        (studentArr -> p)[indexOfRollNum] = rollNum;
    }
}

void printingArray(iArray* studentArr){
    for(int i=0; i<(studentArr -> reserved_RollNum); i++){
        printf("\nElement on %d index : %d", i, (studentArr -> p)[i]);
    }
}

int main(){

    int rollNumber, indexStudent;
    iArray studentEntry;

    createArray(&studentEntry, 100, 7);
    reservedArray(&studentEntry);

    printf("\nEnter a Roll number which you want to add : ");
    scanf("%d",&rollNumber);

    printf("Enter an index for this roll number to store : ");
    scanf("%d",&indexStudent);

    insertionArray(&studentEntry, rollNumber, indexStudent);

    printf("\n\n\t\t\t\t*** Updated Array ***");

    printingArray(&studentEntry);

    return 0;
}

// This is so Logical and complicated Program... It's a program of data structure, & If you want to create this program as your logic and knowledge of coding so you need to create algorithm or rough planning for this program...
// Create a C Program of Dynamic Memory Allocation using malloc function...

#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
    int i;
    int n;

    printf("\nHow many integers do you want to enter : ");
    scanf("%d",&n);

    ptr = (int *) malloc(n * sizeof(int));    // --> it will return void pointer... so do typecasting in pointer type...

    printf("\n");
    for(i=0; i<n; i++){
        printf("Enter the value of Element %d --> ",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        printf("\nValue in Element %d --> %d",i+1,ptr[i]);
    }
    return 0;
}

// Here we stored values of elements in Dynamic memory...
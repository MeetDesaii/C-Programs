// Write a C Program to pass Structure to a function and create a simple program to understand fundamentals about it...

#include<stdio.h>
#include<string.h>

typedef struct employee{      // That's how we can use and get advantage of typedef
    int id;
    char username[14];
}emp;

void showDetails(emp emp1){
    printf("\nID of emp1       : %d",emp1.id);
    printf("\nUsername of emp1 : %s",emp1.username);
    printf("\n\t(%s's Profile verified successfully...)",emp1.username);
}

int main(){

    emp emp1;
    emp1.id = 7;
    strcpy(emp1.username, "Meet Desai");
    showDetails(emp1);
    return 0;
}

// so we can pass Structure to a function like this way and can access also like this way...

// If we're using typedef so we don't need to write struct employee emp1; again and again...
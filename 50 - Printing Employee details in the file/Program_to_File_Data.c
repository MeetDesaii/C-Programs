/* Take name and salary of two employees as input from the user and write 
   them to a text file in the following format...
         name1 --> 27000
         name2 --> 32000 
*/

#include<stdio.h>

typedef struct Employee{
    char name[30];
    int salary;
}emp;

int main(){

    emp emp1;
    emp emp2;

    FILE *ptr;
    ptr = fopen("Data.txt", "w");

    printf("\nEnter the name of 1st Employee   : ");
    gets(emp1.name);
    printf("Enter the salary of 1st Employee : ");
    scanf("%d",&emp1.salary);
    printf("\nEnter the name of 2nd Employee   : ");
    fflush(stdin);
    gets(emp2.name);
    printf("Enter the salary of 2nd Employee : ");
    scanf("%d",&emp2.salary);

    fprintf(ptr, "%s --> %d\n",emp1.name,emp1.salary);
    fprintf(ptr, "%s --> %d\n",emp2.name,emp2.salary);

    printf("\n--> Your data stored successfully...");

    fclose(ptr);
    return 0;
}
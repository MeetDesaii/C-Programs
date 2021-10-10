// Create a c program to create structure Employee to store employee details...

#include<stdio.h>
#include<string.h>

struct Employee{
    int id;
    char name[30];
    int joinedYear;
    char skills[100];
    float salary;
};

int main(){

    // For Employee 1 :-
    struct Employee employee1;
    employee1.id = 7;
    strcpy(employee1.name, "Meet Vipulbhai Desai");
    employee1.joinedYear = 2021;
    strcpy(employee1.skills, "Master in C Programming, Master in Java Programming, Master in Kotlin Programming");
    employee1.salary = 70000000;

    printf("\n\n\t\t\t*** Details of Employee 1 is Here ! ***");
    printf("\nID of employee 1 : %d",employee1.id);
    printf("\nName of employee 1 : %s",employee1.name);
    printf("\nJoined year of employee 1 : %d",employee1.joinedYear);
    printf("\nSkills of employee 1 : %s",employee1.skills);
    printf("\nSalary of employee 1 : %.1f",employee1.salary);

    // For Employee 2 :-
    struct Employee employee2;
    employee2.id = 14;
    strcpy(employee2.name, "Abhi Dineshbhai Bhanderi");
    employee2.joinedYear = 2021;
    strcpy(employee2.skills, "Master in HTML, Master in CSS, Master in Java script");
    employee2.salary = 70000000;

    printf("\n\n\t\t\t*** Details of Employee 2 is Here ! ***");
    printf("\nID of employee 2 : %d",employee2.id);
    printf("\nName of employee 2 : %s",employee2.name);
    printf("\nJoined year of employee 2 : %d",employee2.joinedYear);
    printf("\nSkills of employee 2 : %s",employee2.skills);
    printf("\nSalary of employee 2 : %.1f",employee2.salary);
    return 0;
}

// So this is the basic program of structure & it is making easy to store lot of informations...
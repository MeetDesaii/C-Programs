// Create a Calculator Using Switch Case...

#include<stdio.h>

int main(){

    float a,b;
    int choice;

    printf("\n\t\t\t\t\t*** Calculator ***\n");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n\t\t\t\t    *** Made by Meet Desai ***\n");

    printf("Enter your Choice : ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Enter 1st Number : ");
            scanf("%f",&a);
            printf("Enter 2nd Number : ");
            scanf("%f",&b);
            printf("\nAddition of %f and %f is %f",a,b,a+b);
            break;
        case 2:
            printf("Enter 1st Number : ");
            scanf("%f",&a);
            printf("Enter 2nd Number : ");
            scanf("%f",&b);
            printf("\nSubtraction of %f and %f is %f",a,b,a-b);
            break;
        case 3:
            printf("Enter 1st Number : ");
            scanf("%f",&a);
            printf("Enter 2nd Number : ");
            scanf("%f",&b);
            printf("\nMultiplication of %f and %f is %f",a,b,a*b);
            break;
        case 4:
            printf("Enter 1st Number : ");
            scanf("%f",&a);
            printf("Enter 2nd Number : ");
            scanf("%f",&b);
            printf("\nDivision of %f and %f is %f",a,b,a/b);
            break;
        default :
            printf("Invalid Input !\nPlease Enter a valid value !");
    }
    return 0;
}
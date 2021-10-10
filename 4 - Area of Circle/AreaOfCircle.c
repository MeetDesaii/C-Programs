// Create a program to calculate area of circle...

#include<stdio.h>
#include<math.h>        // math.h --> is a Standard Library

void main(){
    float radius;
    float area;

    printf("Enter a Radius : ");
    scanf("%f",&radius);

    area = M_PI * radius * radius;   

    printf("Area of the circle : %f",area);
}

// If we want to use M_PI --> so we must need to include math.h library file...
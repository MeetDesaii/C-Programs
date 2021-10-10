// Create a C Program of Addition of three numbers using Functions...

#include<stdio.h>
float addition(float,float,float);        

int main(){

    float x,y,z;

    printf("Enter 1st Number : ");
    scanf("%f",&x);
    printf("Enter 2nd Number : ");
    scanf("%f",&y);
    printf("Enter 3rd Number : ");
    scanf("%f",&z);

    // Call by Value...
    float add = addition(x,y,z);       // --> Actual Arguments

    printf("\nAddition of %f, %f & %f is %f",x,y,z,add);
    return 0;
}

float addition(float a,float b,float c){        // --> Formal Arguments
    float sum = a+b+c;
    return sum;
}

// This is a simple program of use of functions in C Programming...

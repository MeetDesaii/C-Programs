// Create a program to convert Temperature into Celsius to Fahrenheit...

#include<stdio.h>

void main(){
    float celsius;
    float fahrenheit;

    printf("Temperature in Celsius : ");
    scanf("%f",&celsius);

    fahrenheit = ((9*celsius)/5) + 32 ;    // Formula for conversion

    printf("Temperature in Fahrenheit : %f",fahrenheit);
}
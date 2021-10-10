// Create a C program to calculate result of 12th Science Flow...

#include<stdio.h>

int main(){

    float maths,physics,chemistry,english,computer;
    float result, average;

    printf("\nEnter marks of Maths out of 100     : ");
    scanf("%f",&maths);
    printf("Enter marks of Physics out of 100   : ");
    scanf("%f",&physics);
    printf("Enter marks of Chemistry out of 100 : ");
    scanf("%f",&chemistry);
    printf("Enter marks of English out of 100   : ");
    scanf("%f",&english);
    printf("Enter marks of Computer out of 100  : ");
    scanf("%f",&computer);

    result = maths + physics + chemistry + english + computer;
    average = (result/500) * 100 ;

    printf("\nYour Percentage is %f\n",average);

    if(average>90){
        printf("\nYou Achieved A1 Grade...");
    }
    else if(average>80 && average<=90){
        printf("\nYou Achieved A2 Grade...");
    }
    else if(average>70 && average<=80){
        printf("\nYou Achieved B1 Grade...");
    }
    else if(average>60 && average<=70){
        printf("\nYou Achieved B2 Grade...");
    }
    else if(average>50 && average<=60){
        printf("\nYou Achieved C1 Grade...");
    }
    else if(average>40 && average<=50){
        printf("\nYou Achieved C2 Grade...");
    }
    else{
        printf("\nYou are Failed...");
    }

    return 0;
}

// This Program is about to result of 12th Science and it will also provide you grade using if-else conditionals...

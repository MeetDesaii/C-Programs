// Create a C Program to give Rating to any Company...

#include<stdio.h>

int main(){

    int rating;

    printf("\n\t\t\t\t\t*** Rate US ***\n");
    printf("\n1. Rate 1 Star");
    printf("\n2. Rate 2 Star");
    printf("\n3. Rate 3 Star");
    printf("\n4. Rate 4 Star");
    printf("\n5. Rate 5 Star");
    printf("\n\t\t\t\t *** Thanks to give Rating ***\n");

    printf("\nEnter Your Rating Choice : ");
    scanf("%d",&rating);

    switch(rating){
        case 1:
            printf("Thanks for your Feedback, Thanks for 1 star feedback...");
            break;
        case 2:
            printf("Thanks for your Feedback, Thanks for 2 star feedback...");
            break;
        case 3:
            printf("Thanks for your Feedback, Thanks for 3 star feedback...");
            break;
        case 4:
            printf("Thanks for your Feedback, Thanks for 4 star feedback...");
            break;
        case 5:
            printf("Thanks for your Feedback, Thanks for 5 star feedback...");
            break;
        default : 
            printf("Invalid Input !");
    }
    return 0;
}

// This is a Simple Format of Switch Case...
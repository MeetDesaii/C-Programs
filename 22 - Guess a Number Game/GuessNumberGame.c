// This program is about to Guess a Number Game...

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, inputNumber, noOfGuesses=1;

    srand(time(0));                // Initialize & time(0) will return time in seconds...
    number = rand()%100 + 1;       // --> Logic of the Program...That's how we can Generate a Random number...

    do{
        printf("\n\nGuess the Number between 1 to 100 : ");
        scanf("%d",&inputNumber);

        if(inputNumber > number){
            printf("Decrease Your Number...");
        }
        else if(inputNumber < number){
            printf("Increase Your Number...");
        }
        else if(inputNumber == number){
            printf("\nYou Guessed Right Number...\nYou Guessed it with %d Guesses...",noOfGuesses);
        }
        noOfGuesses++;
    }
    while(inputNumber!=number);

    return 0;
}

// Here, We Used Do While Loop and You can Use While Loop also to solve this problem...
// How to Generate Random number --> it is important in this program...


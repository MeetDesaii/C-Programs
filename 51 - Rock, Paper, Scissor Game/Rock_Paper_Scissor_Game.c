// Create a Rock, Paper, Scissor Game by generating random number...there are 1 input is computer input which is random generator and 1 input is user input which will give a message to take input from user...

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
int main(){

    int computerInput, userInput;
    int lower=1, upper=3, count=1;
    printf("\n\t\t\t *** Welcome in the Rock, Paper, Scissor Game ***");
    printf("\n1 --> Rock\n2 --> Paper\n3 --> Scissor");
    srand(time(0));     
    int i;
    for (i = 0; i < count; i++) {

        // That's how we can generate random number in given range...
        computerInput = (rand() % (upper - lower + 1)) + lower;  
    }
    printf("\n\nEnter your choice : ");
    scanf("%d", &userInput);

    // This is for computer input information...
    if(computerInput==1){
        printf("\nComputer choose Rock...");
    }
    else if(computerInput==2){
        printf("\nComputer choose Paper...");
    }
    else if(computerInput==3){
        printf("\nComputer choose Scissor...");
    }

    // This is for user input information...
    if(userInput==1){
        printf("\nYou choose Rock...");
    }
    else if(userInput==2){
        printf("\nYou choose Paper...");
    }
    else if(userInput==3){
        printf("\nYou choose Scissor...");
    }
    else{
        printf("\nInvalid input !!"); 
    }

    // This is a logic that when we're winning and losing the game...
    if(userInput == computerInput){
        printf("\n\nThis Game is Draw !!");
    }
    else if((computerInput==1 && userInput==2) || (computerInput==2 && userInput==3) || (computerInput==3 && userInput==1)){
        printf("\n\nCongratulations... You won this Game !!");
    }
    else{
        printf("\n\nComputer won this Game !!");
    }
    return 0;
}
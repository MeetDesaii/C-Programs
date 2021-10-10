// Create a program of Structure with array when we can store user data using array in structure...

#include<stdio.h>
#include<string.h>

struct Users{
    char userID[14];
    int followers;
    char name[30];
    int birthYear;
    char bio[100];
};

int main(){

    struct Users instagram[1000];

    strcpy(instagram[0].userID, "__meet_desai__");
    instagram[0].followers = 300000000;
    strcpy(instagram[0].name, "Meet Desai");
    instagram[0].birthYear = 2002;
    strcpy(instagram[0].bio, "--> Do not repeat yourself <--");

    printf("\n\nUser ID    : %s",instagram[0].userID);
    printf("\nFollowers  : %d",instagram[0].followers);
    printf("\nUser name  : %s",instagram[0].name);
    printf("\nBirth year : %d",instagram[0].birthYear);
    printf("\nBio        : %s",instagram[0].bio);
    printf("\n\t(%s's data stored successfully...)",instagram[0].userID);

    strcpy(instagram[1].userID, "vishalbhanderii");
    instagram[1].followers = 100000000;
    strcpy(instagram[1].name, "Vishal Bhanderi");
    instagram[1].birthYear = 1998;
    strcpy(instagram[1].bio, "Vishal 🌙");

    printf("\n\nUser ID    : %s",instagram[1].userID);
    printf("\nFollowers  : %d",instagram[1].followers);
    printf("\nUser name  : %s",instagram[1].name);
    printf("\nBirth year : %d",instagram[1].birthYear);
    printf("\nBio        : %s",instagram[1].bio);
    printf("\n\t(%s's data stored successfully...)",instagram[1].userID);
    
    strcpy(instagram[2].userID, "_.dharabhanderi");
    instagram[2].followers = 50000000;
    strcpy(instagram[2].name, "Dhara Bhanderi");
    instagram[2].birthYear = 2001;
    strcpy(instagram[2].bio, "Dhara💫🌸🌟");

    printf("\n\nUser ID    : %s",instagram[2].userID);
    printf("\nFollowers  : %d",instagram[2].followers);
    printf("\nUser name  : %s",instagram[2].name);
    printf("\nBirth year : %d",instagram[2].birthYear);
    printf("\nBio        : %s",instagram[2].bio);
    printf("\n\t(%s's data stored successfully...)",instagram[2].userID);
    
    return 0;
}

// So we can store user's data in array using structures like this & this is very helpful to store data for programmer...
// We can use pointer also to access it.. so Try it yourself...
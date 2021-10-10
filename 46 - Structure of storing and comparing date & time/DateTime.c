// Write a structure capable of storing date and time (Timestamp) & Write a function to compare those dates...

#include<stdio.h>

typedef struct timeStamp{
    int date;
    int month;
    int year;
    int hour;
    int minute;
    int second;
}timeStamp;

void display(timeStamp time){

    printf("\n--> %d/%d/%d  %d:%d:%d",time.date, time.month, time.year, time.hour, time.minute, time.second);

}

int compareTimeStamp(timeStamp time1, timeStamp time2){
    // First comparing with year...
    if(time1.year<time2.year){
        return 1;
    }
    if(time1.year>time2.year){
        return -1;
    }

    // Second comparing with month...
    if(time1.month<time2.month){
        return 1;
    }
    if(time1.month>time2.month){
        return -1;
    }

    // Third comparing with date...
    if(time1.date<time2.date){
        return 1;
    }
    if(time1.date>time2.date){
        return -1;
    }

    // Forth comparing with hour...
    if(time1.hour<time2.hour){
        return 1;
    }
    if(time1.hour>time2.hour){
        return -1;
    }

    // Fifth comparing with minute...
    if(time1.minute<time2.minute){
        return 1;
    }
    if(time1.minute>time2.minute){
        return -1;
    }

    // Sixth comparing with second...
    if(time1.second<time2.second){
        return 1;
    }
    if(time1.second>time2.second){
        return -1;
    }
    return 0;
}

int main(){

    timeStamp time1 = {13,9,2021,4,45,51};
    timeStamp time2 = {3,1,2002,11,7,53};

    display(time1);
    display(time2);

    printf("\nTime in Compared : %d",compareTimeStamp(time1,time2));
    printf("\nNote : (1 means second time is increased with compare of first time.)");
    printf("\n       (-1 means second time is decreased with compare of first time.)");
    printf("\n       (0 means second time is same with compare of first time.)");

    return 0;
}

// This is tricky and competitive program for structure...
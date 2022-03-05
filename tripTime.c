//Calculating trip length and other expenses based on trip length

#include <stdio.h>
#include tripTime.h

//Function Definition
int getDaysOnTrip();
int getStartTime();
int getEndTime();

//Variables
int startTime = 0;
int endTime = 0;
int days = 0;

//asks the user to enter how many days they will be on the trip
int getDaysOnTrip(){
    printf("\nPlease enter how many days you will be on the trip: ");
    do{
        scanf("%i", &days);
        if(days < 1){
            printf("\nInvalid entry. Please enter a value greater than 1.");
            printf("\nPlease enter how many days you will be on the trip: ");
        }
    }while(days < 1);
    return days;
}

//asks the user to enter the start time in military hours
int getStartTime(){
    printf("\nPlease enter the trip's departure time in military hours: ");
    scanf("%i", &startTime);
    return startTime;
}

//asks the user to enter the end time in military hours
int getEndTime(){
    printf("\nPlease enter the time of arrival back home in military hours: ");
    scanf("%i", &endTime);
    return endTime;
}
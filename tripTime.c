//Calculating trip length and other expenses based on trip length

#include <stdio.h>
#include tripTime.h

//Function Definition
int getDaysOnTrip();
int getStartTime();
int getEndTime();

//Global Variables
int startTime = 0; //Time of departure
int endTime = 0; //Time of arrival back home
int days = 0;

//Asks the user to enter how many days they will be on the trip
//Returns the number of days on the trip
int getDaysOnTrip(){
    printf("\nPlease enter how many days you will be on the trip: ");

    //while loop to make sure that the number of days is valid
    do{
        scanf("%i", &days);
        if(days < 1){
            printf("\nInvalid entry. Please enter a value greater than 1.");
            printf("\nPlease enter how many days you will be on the trip: ");
        }
    }while(days < 1);

    return days;
}

//Asks the user to enter the start time in military time
//Returns the start time of the trip
int getStartTime(){
    printf("\nPlease enter the trip's departure time in military time: ");

    //while loop to make sure that time is valid (between 0000 and 2400)
    do{
        scanf("%i", &startTime);
        if((startTime < 0) || (startTime > 2400)){
            printf("\nInvalid entry. Please enter a value between 0000 and 2400.");
            printf("\nPlease enter the trip's departure time in military time: ");
        }
    }while((startTime < 0) || (startTime > 2400));

    return startTime;
}

//asks the user to enter the end time in military time
//Returns the end time of the trip
int getEndTime(){
    printf("\nPlease enter the time of arrival back home in military time: ");

    //while loop to make sure that time is valid (between 0000 and 2400)
    do{
        scanf("%i", &endTime);
        if((endTime < 0) || (endTime > 2400)){
            printf("\nInvalid entry. Please enter a value between 0000 and 2400.");
            printf("\nPlease enter the trip's departure time in military time: ");
        }
    }while((endTime < 0) || (endTime > 2400));

    return endTime;
}
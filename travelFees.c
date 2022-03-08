// various static travel fees
#include <stdio.h>
#ifndef TRAVELFEES_H
#define TRAVELFEES_H
#include "main.h"

// asks the user for various costs

struct Expense calculateAirfare()
{
    printf("\n Please provide the cost of roundtrip airfare:");
    float fees;
    scanf("%f", &fees); 

    struct Expense AirFare; 
    AirFare.expectedCost = 0; //idk what this should be
    AirFare.actualCost = fees;
    return AirFare;
};

struct Expense calculateCarRentals()
{
    printf("\n Please provide the amount for any and all car rentals");
    float rentals;
    scanf("%f", &rentals); 


    struct Expense CarRental; 
    CarRental.expectedCost = 0; //idk what this should be
    CarRental.actualCost = rentals;
    return CarRental;
};

//struct Expense calculateGasCost();

//struct Expense calculateConferenceOrSeminarFees();
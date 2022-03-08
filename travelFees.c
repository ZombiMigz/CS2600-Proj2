// various static travel fees
#include <stdio.h>
#include "main.h"

// asks the user for various costs

struct Expense calculateAirfare()
{
    printf("\n Please provide the cost of roundtrip airfare: $");
    float fees;
    scanf("%f", &fees);

    struct Expense AirFare;
    AirFare.expectedCost = fees;
    AirFare.actualCost = fees;
    return AirFare;
};

struct Expense calculateCarRentals()
{
    printf("\n Please provide the amount for any and all car rentals: $");
    float rentals;
    scanf("%f", &rentals);

    struct Expense CarRental;
    CarRental.expectedCost = rentals;
    CarRental.actualCost = rentals;
    return CarRental;
};

struct Expense calculateGasCost()
{
    printf("\n Please provide the miles traveled in a private vehicle: ");
    float miles;
    scanf("%f", &miles);

    struct Expense GasCost;
    GasCost.expectedCost = miles * .27;
    GasCost.actualCost = miles * .27;
    return GasCost;
}; // ask for mile and multiply by $.27

struct Expense calculateConferenceOrSeminarFees()
{
    printf("\n Please provide the cost of Conference of Seminar Fees: $");
    float comSemFee;
    scanf("%f", &comSemFee);

    struct Expense ConferenceOrSeminar;
    ConferenceOrSeminar.expectedCost = comSemFee;
    ConferenceOrSeminar.actualCost = comSemFee;
    return ConferenceOrSeminar;
};
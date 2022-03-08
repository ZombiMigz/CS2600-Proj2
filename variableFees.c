#include "main.h"
#include "variableFees.h"
#include <stdio.h>
struct Expense calculateParkingFees(int *day)
{
    // The company allows up to $6 per day. Anything more than this must be paid by
    //  the employee so we can reuse to calculate his spending easily

    printf("\n Enter the cost of parking on day %d: $", *day);
    float cost;
    scanf("%f", &cost);

    struct Expense expense;
    expense.expectedCost = 6;
    expense.actualCost = cost;
    return expense;
}

struct Expense calculateTaxiFees(int *day)
{
    // The company allows up to $10 per day
    printf("\n Enter the cost of taxi fees on day %d: $", *day);
    float cost;
    scanf("%f", &cost);

    struct Expense expense;
    expense.expectedCost = 10;
    expense.actualCost = cost;
    return expense;
}

struct Expense calculateHotelExpenses(int *day)
{
    // The company allows up to $90 per night for lodging. Anything more than this  must be paid by the employee
    printf("\n Enter the cost of lodging on night %d: $", *day);
    float cost;
    scanf("%f", &cost);

    struct Expense expense;
    expense.expectedCost = 90;
    expense.actualCost = cost;
    return expense;
}
#include <stdio.h>
#include "main.h"
#include "tripTime.h"
#include "mealFees.h"
#include "travelFees.h"

struct Expense expenses[999];
int count = 0;
void printExpenses() // temporary for debugging
{
  float totalCost = 0;
  float totalCompanyPays = 0;
  float totalEmployeePays = 0;
  float totalSavings = 0;
  for (int i = 0; i < count; i++) // iterate through expenses
  {
    float actualCost = expenses[i].actualCost;    // cost of the expense
    float companyPaid = expenses[i].expectedCost; // the amount the company pays

    totalCost += actualCost;
    if (actualCost > companyPaid) // the businessperson used more than the company will cover
    {
      totalCompanyPays += companyPaid;
      totalEmployeePays += actualCost - companyPaid;
    }
    if (companyPaid > actualCost) // the businessperson used less money than the company will cover
    {
      totalCompanyPays += actualCost;
      totalSavings += companyPaid - actualCost;
    }
    if (companyPaid == actualCost) // company covers all costs
    {
      totalCompanyPays += actualCost;
    }
  }

  // print results
  printf("Total Cost of Trip: $%.2f\nCompany Pays: $%.2f\nEmployee Need to Pay: $%.2f\nEmployee Saved: $%.2f", totalCost, totalCompanyPays, totalEmployeePays, totalSavings);
}

int main()
{
  // start program
  printf("Welcome to our Trip Expenses Calculator.\n*************************\nPlease respond to the following questions.\n");

  // trip time functions
  days = getDaysOnTrip();
  startTime = getStartTime();
  endTime = getEndTime();

  // get meal costs
  for (int day = 1; day <= days; day++) // breakfast
  {
    if (day == 1 && startTime >= 700) // first day
      continue;
    if (day == days && startTime <= 800) // last day
      continue;
    expenses[count++] = calculateBreakfast(&day);
  }
  for (int day = 1; day <= days; day++) // lunch
  {
    if (day == 1 && startTime >= 1200) // first day
      continue;
    if (day == days && startTime <= 1300) // last day
      continue;
    expenses[count++] = calculateLunch(&day);
  }
  for (int day = 1; day <= days; day++) // dinner
  {
    if (day == 1 && startTime >= 1800) // first day
      continue;
    if (day == days && startTime <= 1900) // last day
      continue;
    expenses[count++] = calculateDinner(&day);
  }

  // get travel fees
  expenses[count++] = calculateAirfare();
  expenses[count++] = calculateCarRentals();
  expenses[count++] = calculateGasCost();
  expenses[count++] = calculateConferenceOrSeminarFees();

  printExpenses();
  return 0;
}

#include <stdio.h>
#include "main.h"
#include "tripTime.h"
#include "mealFees.h"

struct Expense expenses[999];
int count = 0;
void printExpenses() // temporary for debugging
{
  for (int i = 0; i < count; i++)
  {
    printf("%d) |Actual Cost: %.2f |Company Covered Cost: %.2f |Reimbursed: %.2f |Saved: %.2f\n",
           i, expenses[i].actualCost, expenses[i].expectedCost, 0, 0);
  }
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

  printExpenses();
  return 0;
}

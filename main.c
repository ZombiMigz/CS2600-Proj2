#include <stdio.h>
#include "main.h"
#include "tripTime.h"
#include"variableFees.h"

int main()
{
  // start program
  printf("Welcome to our Trip Expenses Calculator.\n*************************\nPlease respond to the following questions.\n");

  // trip time functions
  days = getDaysOnTrip();
  startTime = getStartTime();
  endTime = getEndTime();
  // TEST FUNCTION VARIABLE FEES 

  int a, b, c; 

  a = calculateTaxiFees(5,10); // 5 days 10/day company pay;

  printf("%d",a);

  return 0;
}

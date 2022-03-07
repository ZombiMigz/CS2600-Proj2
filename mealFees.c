#include <stdio.h>
#include "main.h"
#include "tripTime.h"
#include <string.h>

int requestMealData(char *meal, int **day)
{
  printf("How much did you spend on %s on day %d: $", meal, **day);
  int res;
  scanf("%d", &res);
  return res;
}

struct Expense calculateBreakfast(int *day)
{
  struct Expense res;
  res.expectedCost = 9;
  res.actualCost = requestMealData("breakfast", &day);
  return res;
}
struct Expense calculateLunch(int *day)
{
  struct Expense res;
  res.expectedCost = 12;
  res.actualCost = requestMealData("lunch", &day);
  return res;
}
struct Expense calculateDinner(int *day)
{
  struct Expense res;
  res.expectedCost = 16;
  res.actualCost = requestMealData("dinner", &day);
  return res;
}

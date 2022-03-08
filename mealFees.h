#ifndef MEALFEES_H
#define MEALFEES_H
#include "main.h"
// calculate costs for various meals
/*
Based on instructions:
On the first day of the trip, breakfast is allowed as an expense if the time of departure is before 7
a.m.
Lunch is allowed if the time of departure is before 12 noon.
Dinner is allowed on the first day if the time of departure is before 6 p.m.
*/

struct Expense calculateBreakfast(int *day);
struct Expense calculateLunch(int *day);
struct Expense calculateDinner(int *day);

#endif
#ifndef TRIPTIME_H
#define TRIPTIME_H
#include "main.h"
// calculate costs for various meals
/*
Based on instructions:
On the first day of the trip, breakfast is allowed as an expense if the time of departure is before 7
a.m.
Lunch is allowed if the time of departure is before 12 noon.
Dinner is allowed on the first day if the time of departure is before 6 p.m.
*/
Expense calculateBreakfast();
Expense calculateLunch();
Expense calculateDinner();
#endif
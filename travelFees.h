// various static travel fees

#ifndef TRAVELFEES_H
#define TRAVELFEES_H
#include "main.h"
// asks the user for various costs ( some expected cost constants are defined in instructions )
struct Expense calculateAirfare();
struct Expense calculateCarRentals();
struct Expense calculateGasCost(); // ask for mile and multiply by $.27
struct Expense calculateConferenceOrSeminarFees();

#endif
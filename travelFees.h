// various static travel fees

#ifndef TRAVELFEES_H
#define TRAVELFEES_H
#include "main.h"
// asks the user for various costs ( some expected cost constants are defined in instructions )
Expense calculateAirfare();
Expense calculateCarRentals();
Expense calculateGasCost(); // ask for mile and multiply by $.27
Expense calculateConferenceOrSeminarFees();

#endif
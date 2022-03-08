// fees that require access to trip length and time
#ifndef VARIABLEFEES_H
#define VARIABLEFEES_H
#include "main.h"

struct Expense calculateParkingFees();
struct Expense calculateTaxiFees();
struct Expense calculateHotelExpenses();
#endif

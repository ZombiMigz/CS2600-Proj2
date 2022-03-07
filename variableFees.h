// fees that require access to trip length and time
#ifndef VARIABLEFEES_H
#define VARIABLEFEES_H
#include "main.h"
int calculateParkingFees(int day , int pay);
int calculateTaxiFees(int day, int pay);
int calculateHotelExpenses(int day, int pay);
#endif

// I SUGGEST USING INT FUNCTION  TO RETURN   EACH VALUE SEPERATEDLY DUE TO THE COMPANY WILL PAY FOR EACH SECTIONS,
//   AS HE MENTIONED IN THE DECRIPTION. MOREOVER, WITH THIS TYPE OF DECLARE FUNCTION WE CAN USE FOR ANY PART OF THE PROJECT
// LIKE THE ACTUAL COST IF HE STAY OVER WE CAN USE TO CALCULATE ALSO.
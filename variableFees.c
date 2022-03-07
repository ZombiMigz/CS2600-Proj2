int calculateParkingFees(int day, int pay)
{
//The company allows up to $6 per day. Anything more than this must be paid by 
// the employee so we can reuse to calculate his spending easily
    int total; 
    total = day * pay;
    return total;

}


int calculateTaxiFees(int day , int pay)
{
    // The company allows up to $10 per day
    int total; 
    total = day * pay;
    return total;
}

int calculateHotelExpenses(int day, int pay)
{
    //The company allows up to $90 per night for lodging. Anything more than this  must be paid by the employee
    int total; 
    total = day * pay;
    return total;
}
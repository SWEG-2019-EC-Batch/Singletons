// Task 2: Electricity bill
// Name: Samuel Jembere          ID: ETS 1477/18
//
// (a) Inputs and outputs
//     Input  : electricity units used in the month (whole number, kWh)
//     Outputs: energy charge, service charge and total bill (two decimals)
//
// (b) Process
//     1. Define constants: first block = 50 units, rates 1.50 and 2.00 birr
//        per unit, service charge = 10 birr.
//     2. Read the units used.
//     3. Set unitsInFirstBlock = (units < 50) ? units : 50.
//     4. Set unitsAboveBlock   = (units > 50) ? units - 50 : 0.
//     5. Compute energy charge = unitsInFirstBlock x 1.50
//                              + unitsAboveBlock x 2.00.
//     6. Compute total bill = energy charge + 10.
//     7. Print the energy charge, service charge and total bill with two
//        decimals.
//
// (c) Program

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants
    const int    FIRST_BLOCK_UNITS = 50;
    const double RATE_FIRST_BLOCK  = 1.50;   // birr per kWh
    const double RATE_ABOVE_BLOCK  = 2.00;   // birr per kWh
    const double SERVICE_CHARGE    = 10.00;  // birr

    // Input
    int units;
    cout << "Enter the electricity units used (kWh): ";
    cin >> units;

    // Process
    int unitsInFirstBlock = (units < FIRST_BLOCK_UNITS) ? units : FIRST_BLOCK_UNITS;
    int unitsAboveBlock   = (units > FIRST_BLOCK_UNITS) ? (units - FIRST_BLOCK_UNITS) : 0;

    double energyCharge = unitsInFirstBlock * RATE_FIRST_BLOCK
                        + unitsAboveBlock   * RATE_ABOVE_BLOCK;
    double totalBill    = energyCharge + SERVICE_CHARGE;

    // Output
    cout << fixed << setprecision(2);
    cout << "Energy charge:  " << energyCharge   << " birr" << endl;
    cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill:     " << totalBill      << " birr" << endl;

    return 0;
}

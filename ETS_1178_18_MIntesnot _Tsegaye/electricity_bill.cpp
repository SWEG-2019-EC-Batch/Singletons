// Task 2: Electricity bill
//
// Inputs:  electricity units used in a month (kWh, whole number)
// Outputs: energy charge, service charge, total bill (2 decimal places)
//
// Process:
// 1. Read the units
// 2. Use the conditional operator:
//    if units > 50, energy = (units - 50) * 2 + 75   (75 is 50 units * 1.50)
//    otherwise,     energy = units * 1.50
// 3. service charge = 10
// 4. total = energy + service charge
// 5. Set the output to 2 decimal places
// 6. Print the energy charge, service charge and total bill
//
// Test data: 80 units -> energy 135.00, total 145.00
//            30 units -> energy 45.00,  total 55.00
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int    FIRST_BLOCK_UNITS = 50;
    const double FIRST_BLOCK_RATE  = 1.50;
    const double EXTRA_RATE        = 2.00;
    const double SERVICE_CHARGE    = 10.00;

    int units;
    int firstUnits, extraUnits;
    double energyCharge, totalBill;

    cout << "Enter electricity units used (kWh): ";
    cin >> units;

    firstUnits = (units > FIRST_BLOCK_UNITS) ? FIRST_BLOCK_UNITS : units;
    extraUnits = (units > FIRST_BLOCK_UNITS) ? (units - FIRST_BLOCK_UNITS) : 0;

    energyCharge = firstUnits * FIRST_BLOCK_RATE + extraUnits * EXTRA_RATE;
    totalBill    = energyCharge + SERVICE_CHARGE;

    cout << fixed << setprecision(2);
    cout << "Energy charge : " << energyCharge << " birr" << endl;
    cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill    : " << totalBill << " birr" << endl;

    return 0;
}
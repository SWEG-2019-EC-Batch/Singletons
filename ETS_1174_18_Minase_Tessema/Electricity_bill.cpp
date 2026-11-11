/*
TASK 2: ELECTRICITY BILL

 INPUTS AND OUTPUTS

Inputs:
    1.  Monthly electricity consumption in kWh (whole number).

Outputs:
    1.  Total cost of electricity consumed (birr).
    2.  Fixed service charge (10 birr).
    3.  Total electricity bill (birr).

 PROCESS

    1. Start the program.
    2. Declare an integer variable for
       Monthly electricity consumption.
    3. Declare double variables for
       Service charge, Total bill,
       Energy charge, first 50 units of electricity consumption and remaining units.
    4. Read the monthly electricity units.
    5. Use the conditional operator to calculate
       first 50 units:
       If electricity consumption <= 50, use all units.
       Otherwise, use 50 units.
    7. Use the conditional operator to calculate
       remaining units:
       If electricity consumption > 50, subtract 50.
       Otherwise, use 0.
    8. Calculate the energy charge:
       Energy charge = (first 50 units * 1.5) + (remaining units * 2.0)
    9. Calculate the total bill:
       Total bill = Energy charge + Service charge
    10. Set the output to two decimal places using fixed and setprecision(2).
    11. Display Energy charge, Service charge and Total bill.
    12. End the program.
*/
   

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int electricity_units;
double service_charge = 10;
double total_bill, energy_charge, first50, rest;

cout << "Enter Monthly Electricity Units (in KWH): ";
cin >> electricity_units;

first50 = (electricity_units <= 50) ? electricity_units : 50;
rest = (electricity_units > 50) ? electricity_units - 50 : 0;
energy_charge = (first50 * 1.5) + (rest * 2);
total_bill = energy_charge + service_charge;

cout << fixed << setprecision(2);
cout << "Energy Charge: " << energy_charge << endl;
cout << "Service Charge: " << service_charge << endl;
cout << "Total Bill: " << total_bill << endl;
return 0;
}

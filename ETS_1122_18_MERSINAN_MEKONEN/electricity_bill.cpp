/*

  A C++ PROGRAM THAT CALCULATES THE TOTAL ELECTRIC POWER CONSUMPTION
  
Input:
  
- Electricity units used in a month (kWh)

Process:

1. Start the program
2. Read the number of electricity units used.
3. Calculate the energy charge using 1.50 birr per unit for the first 50 units and 2.00 birr per unit for every unit above 50.
4. Add the fixed service charge of 10 birr.
5. Calculate the total bill by adding the energy charge and the service charge.
6. Display the energy charge, service charge, and total bill to two decimal places.
7. End the program

Output:

- Energy charge (two decimal places)
- Service charge (two decimal places)
- Total bill (two decimal places)

*/

// THE PROGRAM

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
    // Define the billing rules provided in the instructions.
  
    const int TIER1_LIMIT = 50;
    const double TIER1_RATE = 1.50;
    const double TIER2_RATE = 2.00;
    const double SERVICE_CHARGE = 10.00;

    int units; // Units are whole numbers (kWh)
  
    double energyCharge, totalBill;
  

    // Get the total units consumed from the user.
  
    cout << "Enter electricity units (kWh): ";
  
    cin >> units;

    // Calculate the energy charge using the ternary conditional operator.
    // Condition: Are units 50 or less? 
    // If True: Multiply the units by the 1.50 birr rate.
    // If False: Charge the first 50 units at 1.50 birr, and the rest at 2.00 birr.
  
    energyCharge = (units <= TIER1_LIMIT) ? (units * TIER1_RATE) : ((TIER1_LIMIT * TIER1_RATE) + ((units - TIER1_LIMIT) * TIER2_RATE));
    
    // Add the fixed service charge to the calculated energy charge.
  
    totalBill = energyCharge + SERVICE_CHARGE;

    // Format output to 2 decimal places, which is standard for currency.
  
    cout << fixed << setprecision(2);
    cout << "Energy charge: " << energyCharge << endl;
    cout << "Service charge: " << SERVICE_CHARGE << endl;
    cout << "Total bill: " << totalBill << endl;

    return 0;
}

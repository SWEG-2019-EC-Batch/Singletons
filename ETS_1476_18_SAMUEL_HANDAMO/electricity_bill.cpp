       //TASK 2 : IPO analysis of Electricity Bill
    

//1. Input
// Electricity units consumed in a month (kWh), a whole number.

//2. Process:

//1. Read the electricity units consumed by the user.
//2. Calculate the energy charge based on the electricity units:
 //  If units are less than or equal to 50: Energy Charge = Units × 1.50.
  //  If units are greater than 50: Energy Charge = (50 × 1.50) + ((Units − 50) × 2.00).
//3. Set the fixed service charge to 10.00 birr.
//4. Calculate the total bill by adding the energy charge and service charge.

//Formulas

//Energy Charge = (electricity_units ≤ 50) ? (electricity_units × 1.50) : (50 × 1.50) + ((electricity_units − 50) × 2.00)

//Total Bill = energy_Charge + serviceCharge

//3. Output
// Energy charge (birr), displayed to two decimal places.
// Service charge (birr), displayed to two decimal places.
// Total electricity bill (birr), displayed to two decimal places.

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int electricity_units;
    const int SERVICE_CHARGE=10.00;
    const double FIRST_RATE = 1.50;
    const double EXTRA_RATE = 2.00;
    double energy_charge;
    double total_bill;
    int serviceCharge;
    cout <<"Enter the electricity units consumed :" <<endl;
    cin >>electricity_units;
    energy_charge =(electricity_units <=50)
                  ? electricity_units * FIRST_RATE
                  : (50 * FIRST_RATE) + ((electricity_units-50) * EXTRA_RATE);
                  serviceCharge =SERVICE_CHARGE;
                  total_bill =energy_charge + serviceCharge;
         cout <<fixed <<setprecision(2);
         cout <<"\nEnergy Charge :" <<energy_charge << "Birr" <<endl;
         cout <<"Service charge :" <<serviceCharge <<"Birr" <<endl;
         cout <<"Total Bill :" <<total_bill << "Birr" <<endl;
         return 0;  
}
 
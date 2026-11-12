// Task 3: Trip speed and fuel cost
// Name: Samuel Jembere          ID: ETS 1477/18
//
// (a) Inputs and outputs
//     Inputs : distance of the trip (km), travel time as hours and minutes
//              (whole numbers), fuel use (liters per 100 km), price per
//              liter (birr)
//     Outputs: average speed (km/h), fuel used (liters), fuel cost (birr),
//              each with two decimals
//
// (b) Process
//     1. Define constants: 60 minutes per hour and 100 km per fuel-use block.
//     2. Read the distance, hours, minutes, fuel use and price per liter.
//     3. Convert the time to hours:
//        totalHours = hours + static_cast<double>(minutes) / 60.
//        (The cast avoids integer division.)
//     4. Compute average speed = distance / totalHours.
//     5. Compute fuel used = distance x fuel use / 100.
//     6. Compute fuel cost = fuel used x price per liter.
//     7. Print the average speed, fuel used and fuel cost with two decimals.
//
// (c) Program

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants
    const double MINUTES_PER_HOUR = 60.0;
    const double KM_PER_BLOCK     = 100.0;   // fuel use is given per 100 km

    // Input
    double distanceKm, litersPer100Km, pricePerLiter;
    int hours, minutes;

    cout << "Enter the distance of the trip (km): ";
    cin >> distanceKm;
    cout << "Enter the travel time (hours minutes): ";
    cin >> hours >> minutes;
    cout << "Enter the fuel use (liters per 100 km): ";
    cin >> litersPer100Km;
    cout << "Enter the price per liter (birr): ";
    cin >> pricePerLiter;

    // Process
    double totalHours   = hours + static_cast<double>(minutes) / MINUTES_PER_HOUR;
    double averageSpeed = distanceKm / totalHours;
    double fuelUsed     = distanceKm * litersPer100Km / KM_PER_BLOCK;
    double fuelCost     = fuelUsed * pricePerLiter;

    // Output
    cout << fixed << setprecision(2);
    cout << "Average speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel used:     " << fuelUsed     << " liters" << endl;
    cout << "Fuel cost:     " << fuelCost     << " birr" << endl;

    return 0;
}

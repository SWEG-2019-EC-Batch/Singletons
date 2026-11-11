// Task 3: Trip speed and fuel cost
//
// Inputs:  distance (km), travel time in hours and minutes (whole numbers),
//          fuel use (liters per 100 km), price per liter (birr)
// Outputs: average speed (km/h), fuel used (liters), fuel cost (birr),
//          each with 2 decimal places
//
// Process:
// 1. Read distance, hours, minutes, fuel use per 100 km and price per liter
// 2. total hours = hours + minutes / 60.0   (60.0 keeps the decimals, 30/60 = 0.5)
// 3. average speed = distance / total hours
// 4. fuel used = distance * fuel use per 100 km / 100
// 5. fuel cost = fuel used * price per liter
// 6. Set the output to 2 decimal places
// 7. Print the average speed, fuel used and fuel cost
//
// Test data: 150 km, 2 h 30 min, 8 L per 100 km, 60 birr per liter
//            -> 60.00 km/h, 12.00 liters, 720.00 birr
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double MINUTES_PER_HOUR = 60.0;

    double distanceKm, litersPer100Km, pricePerLiter;
    int hours, minutes;
    double totalHours, averageSpeed, fuelUsed, fuelCost;

    cout << "Enter trip distance (km): ";
    cin >> distanceKm;
    cout << "Enter travel time - hours: ";
    cin >> hours;
    cout << "Enter travel time - minutes: ";
    cin >> minutes;
    cout << "Enter fuel use (liters per 100 km): ";
    cin >> litersPer100Km;
    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;

    totalHours   = hours + static_cast<double>(minutes) / MINUTES_PER_HOUR;
    averageSpeed = distanceKm / totalHours;
    fuelUsed     = distanceKm * litersPer100Km / 100;
    fuelCost     = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);
    cout << "Average speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel used    : " << fuelUsed << " liters" << endl;
    cout << "Fuel cost    : " << fuelCost << " birr" << endl;

    return 0;
}
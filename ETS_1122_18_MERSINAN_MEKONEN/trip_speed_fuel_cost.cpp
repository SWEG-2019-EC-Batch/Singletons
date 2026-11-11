/*
  
THE C++ PROGRAM THAT CALCULATES THE SPPED, FUEL AND TOTAL COST OF A CERTAIN TRIP
  
Input:

- Distance of the trip in kilometers (km)
- Travel time in hours
- Travel time in minutes
- Car's fuel consumption in liters per 100 km
- Price per liter in birr

Process:

1. Start the program
2. Read the distance, travel time in hours and minutes, fuel consumption, and price per liter.
3. Convert the travel time from hours and minutes into total hours.
4. Calculate the average speed by dividing the distance by the total travel time in hours.
5. Calculate the amount of fuel used based on the distance and the car's fuel consumption in liters per 100 km.
6. Calculate the fuel cost by multiplying the fuel used by the price per liter.
7. Display the average speed, fuel used, and fuel cost, each to two decimal places.
8. End the program

Output:

- Average speed (km/h), displayed to two decimal places
- Fuel used (liters), displayed to two decimal places
- Fuel cost (birr), displayed to two decimal places

*/

// THE PROGRAM

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
    // Variables for the user's input data.
  
    double distance, fuelPer100km, pricePerLiter;
    int hours, minutes;
    
    // Variables to store the results of our calculations.
  
    double totalTimeHours, averageSpeed, fuelUsed, fuelCost;

    // Ask the user for all necessary inputs.
  
    cout << "Enter distance (km): ";
  
    cin >> distance;

    cout << "Enter hours: ";
  
    cin >> hours;

    cout << "Enter minutes: ";
  
    cin >> minutes;

    cout << "Enter fuel use (liters per 100 km): ";
  
    cin >> fuelPer100km;

    cout << "Enter price per liter (birr): ";
  
    cin >> pricePerLiter;

    // Step 1: Convert time to a single decimal value representing total hours.
    // We divide minutes by 60.0 to force floating-point division.
  
    totalTimeHours = hours + (minutes / 60.0);
    
    // Step 2: Speed formula is Distance divided by Time.
  
    averageSpeed = distance / totalTimeHours;
    
    // Step 3: Find out how many "100 km segments" are in the trip, 
    // then multiply by the fuel rate for that segment.
  
    fuelUsed = (distance / 100.0) * fuelPer100km;
    
    // Step 4: Multiply total liters used by the cost of a single liter.
  
    fuelCost = fuelUsed * pricePerLiter;

    // Print the final calculated values, formatted to exactly 2 decimal places.
  
    cout << fixed << setprecision(2);
    cout << "Average speed (km/h): " << averageSpeed << endl;
    cout << "Fuel used (liters): " << fuelUsed << endl;
    cout << "Fuel cost (birr): " << fuelCost << endl;

    return 0;
}

// 1. Input
 //       Distance of the trip in kilometers (km).
 //Travel time in hours.
 //Travel time in minutes.
 //Fuel consumption in liters per 100 km.
 //Price per liter of fuel (birr).

 //2. Process

//1. Read the trip distance.
//2. Read the travel time in hours and minutes.
//3. Read the car's fuel consumption in liters per 100 km.
//4. Read the price per liter of fuel.
//5. Convert the travel time into hours using the formula:

  // Total Time = Hours + (Minutes / 60.0)

//6. Calculate the average speed:

   //Average Speed = Distance / Total Time

//7. Calculate the fuel used:

  // Fuel Used = (Distance × Fuel Consumption) / 100

//8. Calculate the fuel cost:

  // Fuel Cost = Fuel Used × Price Per Liter

//9. Display the average speed, fuel used, and fuel cost to two decimal places.

 //3. Output
 //Average speed (km/h), displayed to two decimal places.
 //Fuel used (liters), displayed to two decimal places.
// Fuel cost (birr), displayed to two decimal places.


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Declare variables
    double distance, fuelConsumption, pricePerLiter;
    double totalTime, averageSpeed, fuelUsed, fuelCost;

    int hours, minutes;

    // Input
    cout << "Enter trip distance (km): ";
    cin >> distance;

    cout << "Enter travel time (hours): ";
    cin >> hours;

    cout << "Enter travel time (minutes): ";
    cin >> minutes;

    cout << "Enter fuel consumption (liters per 100 km): ";
    cin >> fuelConsumption;

    cout << "Enter fuel price per liter (birr): ";
    cin >> pricePerLiter;

    // Calculate total travel time in hours
    totalTime = hours + (minutes / 60.0);

    // Calculate average speed
    averageSpeed = distance / totalTime;

    // Calculate fuel used
    fuelUsed = (distance * fuelConsumption) / 100.0;

    // Calculate fuel cost
    fuelCost = fuelUsed * pricePerLiter;

    // Display output
    cout << fixed << setprecision(2);

    cout << "\nAverage Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost: " << fuelCost << " Birr" << endl;

    return 0;
}
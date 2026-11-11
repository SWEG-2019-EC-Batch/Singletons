/*
TASK 3: TRIP SPEED AND FUEL COST

 INPUTS AND OUTPUTS

Inputs:
    1. Trip distance (km).
    2. Travel time in hours.
    3. Travel time in minutes.
    4. Fuel consumption (liters per 100 km).
    5. Fuel price per liter (birr).

Outputs:
    1. Average speed (km/h).
    2. Fuel used (liters).
    3. Fuel cost (birr).

 PROCESS

    1. Start the program.
    2. Declare variables for distance, hours,
       minutes, fuel consumption and fuel price.
    3. Read all the required inputs.
    4. Convert travel time into hours:
       Time Traveled = Hours + Minutes / 60
    5. Calculate average speed:
       Average Speed = Distance / Time Traveled
    6. Calculate fuel used:
       Fuel Used = Distance * Fuel Consumption / 100
    7. Calculate fuel cost:
       Fuel Cost = Fuel Used * Fuel Price
    8. Display average speed, fuel used and fuel
       cost to two decimal places.
    9. End the program.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
int travel_hours , travel_minutes;
double distance , price_per_liter, fuel_usage;
double average_speed , fuel_used , fuel_cost, time_traveled;

cout<< "Enter Distance traveled(in km ) ";
cin>> distance ;
cout<< "Enter travel Hours ";
cin>>travel_hours;
cout<< "Enter travel Minutes ";
cin>> travel_minutes;
cout<< "Enter car's fuel use per 100km (in liters) ";
cin>> fuel_usage ;
cout<< "Enter fuel price per liter(in birr) ";
cin>> price_per_liter;

time_traveled = travel_hours + (travel_minutes/60.0);
average_speed = distance / time_traveled;
fuel_used = (fuel_usage/100) * distance;
fuel_cost = fuel_used * price_per_liter;

cout<< fixed<< setprecision(2);
cout<< "Average speed: "<<average_speed <<"km/h"<<endl;
cout<< "Fuel Used: "<< fuel_used <<"liters"<<endl ;
cout<< "Fuel Cost: "<<fuel_cost <<"birr"<<endl ;
return 0 ;
}

#include <iostream>

#include <iomanip>

using namespace std;

int main()

{
	float baggage_fare, baggage_weight, total_fare, trip_fare;
	
	int seat_left, age, destination;
	
	char student;

	cout << "Please enter the available number of seats: ";
	
	cin >> seat_left;
	
	if (seat_left <= 0)
	
	{
		cout << "All available seats have been sold,sorry! :( " << endl;
		
	}
	
	else
	
	{
		// --- HOMEWORK 2: destinations, switch case with number placeholders ---
		
		cout << "\nDestinations:" << endl;
		
		cout << "1. Addis Ababa -> Hossana (300 birr)" << endl;
		
		cout << "2. Addis Ababa -> Hawassa (450 birr)" << endl;
		
		cout << "3. Addis Ababa -> Jimma (800 birr)" << endl;
		
		cout << "4. Addis Ababa -> Mekelle (950 birr)" << endl;
		
		cout << "5. Addis Ababa -> Harar (600 birr)" << endl;
		
		cout << "Please enter your destination number (1-5): ";
		
		cin >> destination;
		
		switch (destination)
		
		{
			
		case 1:
		
			trip_fare = 300;
			
			break;
			
		case 2:
		
			trip_fare = 450;
			
			break;
			
		case 3:
		
			trip_fare = 800;
			
			break;
			
		case 4:
		
			trip_fare = 950;
			
			break;
			
		case 5:
		
			trip_fare = 600;
			
			break;
			
		default:
		
			cout << "Invalid destination number!" << endl;
			
			return 0;
			
		}

		cout << "Please enter your age: ";
		
		cin >> age;
		
		
		// --- HOMEWORK 1: student discount ---
		
		cout << "Are you a student? (y/n): ";
		
		cin >> student;

		// Discount ladder: first match wins, so only ONE discount applies.
		
		if (age < 12)
		
		{
			trip_fare = trip_fare - trip_fare * 0.50; // child: 50% off
			
		}
		
		else if (student == 'y' || student == 'Y')
		
		{
			
			trip_fare = trip_fare - trip_fare * 0.30; // student: 30% off
			
		}
		
		else if (age > 65)
		
		{
			
			trip_fare = trip_fare - trip_fare * 0.25; // senior: 25% off
			
		}
		
		// else: full fare, trip_fare stays as the route fare.

		cout << "Please enter the baggage weight: ";
		cin >> baggage_weight;

		// FIX 1: calculate the baggage charge FIRST, then the total.
		
		baggage_fare = 0;
		
		if (baggage_weight > 20)
		
		{
			
			baggage_fare = (baggage_weight - 20) * 10;
			
		}
		
		total_fare = trip_fare + baggage_fare;

		cout << fixed << setprecision(2);
		
		cout << "Your baggage fare is: " << baggage_fare << endl;
		
		cout << "Your trip fare is:  " << trip_fare << endl;
		
		cout << "Your total fare is: " << total_fare << endl;
		
	}
	
	return 0;
	
}
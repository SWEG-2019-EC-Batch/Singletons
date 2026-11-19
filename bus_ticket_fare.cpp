/*
 * Bus Ticket Fare Calculator
 * --------------------------
 * Calculates the ticket price for a bus trip from Addis Ababa.
 *
 * Rules:
 *   - Base fare is 300 Birr for every route.
 *   - Children (12 and under) get a 50% discount.
 *   - Seniors (60 and over) get a 25% discount.
 *   - Students get an extra 30% discount (can be combined with the above).
 *   - The first 20 kg of baggage is free; each extra kg costs 10 Birr.
 *   - If no seats are available, no ticket is issued.
 */

#include <iostream>
using namespace std;

int main()
{
    // ----- Pricing constants -----
    const int    fare        = 300;
    const double childRate   = 0.5;
    const double seniorRate  = 0.25;
    const double studentRate = 0.3;
    const int    bagRate     = 10;
    const int    freeWeight  = 20;

    // ----- Variables -----
    int    seats, route, age;
    char   student;
    double bagWeight;
    double childDiscount = 0;
    double seniorDiscount = 0;
    double studentDiscount = 0;
    double tripFare, bagFare = 0, totalFare;

    // ----- Seat availability -----
    cout << "Enter available number of seats: " << endl;
    cin >> seats;

    if (seats <= 0)
    {
        cout << "All seats are sold out." << endl;
        return 0;
    }

    // ----- Route selection -----
    cout << "Choose your route:" << endl;
    cout << "1. Addis Ababa to Jimma" << endl;
    cout << "2. Addis Ababa to Dire Dawa" << endl;
    cout << "3. Addis Ababa to Mekele" << endl;
    cout << "4. Addis Ababa to Bahir Dar" << endl;
    cout << "5. Addis Ababa to Adama" << endl;
    cin >> route;

    switch (route)
    {
    case 1:
        cout << "Your destination is Jimma" << endl;
        break;
    case 2:
        cout << "Your destination is Dire Dawa" << endl;
        break;
    case 3:
        cout << "Your destination is Mekele" << endl;
        break;
    case 4:
        cout << "Your destination is Bahir Dar" << endl;
        break;
    case 5:
        cout << "Your destination is Adama" << endl;
        break;
    default:
        cout << "Invalid route." << endl;
        return 0;
    }

    // ----- Passenger details -----
    cout << "Enter your age: " << endl;
    cin >> age;

    cout << "Are you a student? Enter Y or N: " << endl;
    cin >> student;

    cout << "Enter your baggage weight: " << endl;
    cin >> bagWeight;

    // ----- Discounts -----
    if (age <= 12)
    {
        childDiscount = fare * childRate;
    }
    else if (age >= 60)
    {
        seniorDiscount = fare * seniorRate;
    }

    if (student == 'Y' || student == 'y')
    {
        studentDiscount = fare * studentRate;
    }

    tripFare = fare - childDiscount - seniorDiscount - studentDiscount;

    // ----- Baggage fee -----
    if (bagWeight > freeWeight)
    {
        bagFare = (bagWeight - freeWeight) * bagRate;
    }

    totalFare = tripFare + bagFare;

    // ----- Ticket summary -----
    cout << "\n----- TICKET DETAILS -----" << endl;
    cout << "Original trip fare: " << fare << " Birr" << endl;
    cout << "Child discount: " << childDiscount << " Birr" << endl;
    cout << "Senior discount: " << seniorDiscount << " Birr" << endl;
    cout << "Student discount: " << studentDiscount << " Birr" << endl;
    cout << "Trip fare: " << tripFare << " Birr" << endl;
    cout << "Baggage fare: " << bagFare << " Birr" << endl;
    cout << "Total fare: " << totalFare << " Birr" << endl;

    return 0;
}

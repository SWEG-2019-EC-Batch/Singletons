/*
INPUTS:
1. Available seats
2. Route destination
3. Passenger's age
4. Student status
5. Baggage weight

OUTPUTS:
1. Seat availability
2. Selected destination
3. Original trip fare
4. Child, senior and student discounts
5. Trip fare
6. Baggage fare
7. Total fare

PROCESS:
1. Declare variables and constants.
2. Enter the available seats.
3. Check seat availability.
4. Display routes and select a destination.
5. Validate the selected route.
6. Enter passenger's age and student status.
7. Enter baggage weight.
8. Calculate age-based discounts.
9. Calculate student discount.
10. Subtract all discounts from the original fare.
11. Calculate extra baggage charges if weight exceeds 20 kg.
12. Calculate the total fare.
13. Display the ticket details.
14. End the program.
*/



#include <iostream>
using namespace std;

int main() {

    
    const int fare = 300;
    const double childRate = 0.5;
    const double seniorRate = 0.25;
    const double studentRate = 0.3;
    const int bagRate = 10;
    const int freeWeight = 20;

    int seats, route, age;
    char student;
    double bagWeight;
    double childDiscount = 0;
    double seniorDiscount = 0;
    double studentDiscount = 0;
    double tripFare, bagFare = 0, totalFare;

    
    cout << "Enter available number of seats: " << endl;
    cin >> seats;

    if (seats <= 0) {
        cout << "All seats are sold out." << endl;
    }

        else {

    cout << "Choose your route:" << endl;
    cout << "1. Addis Ababa to Jimma" << endl;
    cout << "2. Addis Ababa to Dire Dawa" << endl;
    cout << "3. Addis Ababa to Mekele" << endl;
    cout << "4. Addis Ababa to Bahir Dar" << endl;
    cout << "5. Addis Ababa to Adama" << endl;
    cin >> route;


    switch (route) {
        case 1: 
        cout << "Your destination is Jimma"<<endl;
            break;
        case 2:
        cout << "Your destination is Dire Dawa"<<endl;
            break;
        case 3:
        cout << "Your destination is Mekele"<<endl;
            break;
        case 4:
        cout << "Your destination is Bahir Dar"<<endl;
            break;
        case 5:
        cout << "Your destination is Adama"<<endl;
            break;
        default:
            cout << "Invalid route." << endl;
            return 0;
    }

    cout << "Enter your age: " << endl;
    cin >> age;

    cout << "Are you a student? Enter Y or N: " << endl;
    cin >> student;

    cout << "Enter your baggage weight: " << endl;
    cin >> bagWeight;

    if (age <= 12) {
        childDiscount = fare * childRate;
    }
    else if (age >= 60) {
        seniorDiscount = fare * seniorRate;
    }

    if (student == 'Y' || student == 'y') {
        studentDiscount = fare * studentRate;
    }

    tripFare = fare - childDiscount - seniorDiscount - studentDiscount;

    if (bagWeight > freeWeight) {
        bagFare = (bagWeight - freeWeight) * bagRate;
    }

    totalFare = tripFare + bagFare;

    cout << "\n----- TICKET DETAILS -----" << endl;
    cout << "Original trip fare: " << fare << " Birr" << endl;
    cout << "Child discount: " << childDiscount << " Birr" << endl;
    cout << "Senior discount: " << seniorDiscount << " Birr" << endl;
    cout << "Student discount: " << studentDiscount << " Birr" << endl;
    cout << "Trip fare: " << tripFare << " Birr" << endl;
    cout << "Baggage fare: " << bagFare << " Birr" << endl;
    cout << "Total fare: " << totalFare << " Birr" << endl;
}     
    return 0;

}
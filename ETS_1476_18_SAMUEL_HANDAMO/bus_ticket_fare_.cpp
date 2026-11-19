/*
==================== INPUTS ====================
1. Number of remaining seats
2. Passenger's selected destination
3. Passenger's age
4. Whether the passenger is a student (Y/N)
5. Total baggage weight in kilograms

==================== OUTPUTS ==================
1. Seat availability information
2. Passenger's chosen destination
3. Standard ticket price
4. Child discount
5. Senior citizen discount
6. Student discount
7. Final ticket price
8. Additional baggage charge
9. Total amount to be paid

==================== PROCESS ==================
1. Declare the necessary variables and constants.
2. Request the number of available seats.
3. Determine whether seats are available.
4. Display the list of travel destinations.
5. Allow the passenger to select a destination.
6. Use a switch statement to validate the destination.
7. Request the passenger's age.
8. Ask whether the passenger is a student.
9. Receive the baggage weight.
10. Calculate the applicable age discount.
11. Calculate the student discount if applicable.
12. Determine the discounted ticket price.
13. Calculate additional baggage charges for weight above 20 kg.
14. Calculate the final payment amount.
15. Display all ticket payment information.
16. Terminate the program.
*/

#include <iostream>
using namespace std;

int main() {

    // Declare ticket prices and discount rates
    const int ticketPrice = 300;
    const double childDiscountRate = 0.50;
    const double seniorDiscountRate = 0.25;
    const double studentDiscountRate = 0.30;
    const int extraBagCharge = 10;
    const int allowedBagWeight = 20;

    // Declare passenger information variables
    int availableSeats, destinationChoice, passengerAge;
    char isStudent;
    double luggageWeight;

    // Initialize discount and payment variables
    double childReduction = 0;
    double seniorReduction = 0;
    double studentReduction = 0;
    double discountedPrice, luggageCharge = 0;
    double finalPayment;

    // Request the number of available seats
    cout << "Enter the remaining seats: " << endl;
    cin >> availableSeats;

    // Check whether seats are available
    if (availableSeats <= 0) {

        cout << "Sorry! No seats are currently available." << endl;

    }
    else {

        // Display available travel destinations
        cout << "\nSelect your travel destination:" << endl;
        cout << "1. Addis Ababa to Jimma" << endl;
        cout << "2. Addis Ababa to Dire Dawa" << endl;
        cout << "3. Addis Ababa to Mekele" << endl;
        cout << "4. Addis Ababa to Bahir Dar" << endl;
        cout << "5. Addis Ababa to Adama" << endl;

        cout << "Enter your choice: ";
        cin >> destinationChoice;

        // Identify the selected destination
        switch (destinationChoice) {

            case 1:
                cout << "Selected destination: Jimma" << endl;
                break;

            case 2:
                cout << "Selected destination: Dire Dawa" << endl;
                break;

            case 3:
                cout << "Selected destination: Mekele" << endl;
                break;

            case 4:
                cout << "Selected destination: Bahir Dar" << endl;
                break;

            case 5:
                cout << "Selected destination: Adama" << endl;
                break;

            default:
                cout << "Invalid destination selection!" << endl;
                return 0;
        }

        // Collect passenger's age
        cout << "\nEnter passenger's age: ";
        cin >> passengerAge;

        // Check student eligibility
        cout << "Are you a student? (Y/N): ";
        cin >> isStudent;

        // Receive baggage information
        cout << "Enter luggage weight in kg: ";
        cin >> luggageWeight;

        // Calculate discount according to passenger's age
        if (passengerAge <= 12) {

            childReduction = ticketPrice * childDiscountRate;

        }
        else if (passengerAge >= 60) {

            seniorReduction = ticketPrice * seniorDiscountRate;

        }

        // Apply student discount when eligible
        if (isStudent == 'Y' || isStudent == 'y') {

            studentReduction = ticketPrice * studentDiscountRate;

        }

        // Calculate ticket price after discounts
        discountedPrice = ticketPrice - childReduction
                          - seniorReduction - studentReduction;

        // Calculate additional luggage payment
        if (luggageWeight > allowedBagWeight) {

            luggageCharge = (luggageWeight - allowedBagWeight)
                            * extraBagCharge;

        }

        // Calculate the complete payment
        finalPayment = discountedPrice + luggageCharge;

        // Display the passenger's payment information
        cout << "\n========== PASSENGER TICKET ==========" << endl;

        cout << "Standard ticket price: "
             << ticketPrice << " Birr" << endl;

        cout << "Child discount: "
             << childReduction << " Birr" << endl;

        cout << "Senior citizen discount: "
             << seniorReduction << " Birr" << endl;

        cout << "Student discount: "
             << studentReduction << " Birr" << endl;

        cout << "Discounted ticket price: "
             << discountedPrice << " Birr" << endl;

        cout << "Additional luggage charge: "
             << luggageCharge << " Birr" << endl;

        cout << "Total payment: "
             << finalPayment << " Birr" << endl;

        cout << "======================================" << endl;
    }

    // End the program successfully
    return 0;
}












   //IOP analysis for student course total.
// a. Inputs and Outputs

//Inputs
//1. Assignment mark (out of 100).
//2. Midterm mark (out of 100).
//3. Final exam mark (out of 100).

//Calculation Formula

//Total = (Assignment × 0.20) + (Midterm × 0.30) + (Final × 0.50)

//Outputs
//1. Total course mark (displayed to one decimal place).
//2. Pass or Fail (Pass if the total is 50 or above; otherwise, Fail).



// b. Process (numbered list)
//This is the algorithm. It explains the steps the computer follows to solve the problem.
//1. Start the program.
//2. Declare three variables for assignment, midterm, and final marks.
//3. Declare a variable to store the total course mark.
//4. Declare a constant for the pass mark and initialize it to 50.
//5. Ask the user to enter the assignment mark.
//6. Read the assignment mark.
//7. Ask the user to enter the midterm mark.
//8. Read the midterm mark.
//9. Ask the user to enter the final exam mark.
//10. Read the final exam mark.
//11. Calculate the course total using the formula:
//Total = (Assignment \times 0.20)+(Midterm \times 0.30)+(Final \times 0.50)
//12. Use the conditional operator (?:) to determine whether the student passes or fails.
//13. Display the total with one decimal place.
//14. Display Pass or Fail.
//15. End the program.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Declare variables
    double assignment, midterm, finalExam, total;
    const int PASS_MARK = 50;

    // Input
    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> finalExam;

    // Calculate total course mark
    total = (assignment * 0.20) +
            (midterm * 0.30) +
            (finalExam * 0.50);

    // Display output
    cout << fixed << setprecision(1);

    cout << "\nTotal Course Mark: " << total << endl;

    cout << "Result: "
         << (total >= PASS_MARK ? "Pass" : "Fail")
         << endl;

    return 0;
}




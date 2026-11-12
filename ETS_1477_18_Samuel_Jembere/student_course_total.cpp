// Task 1: Student course total
// Name: Samuel Jembere          ID: ETS 1477/18
//
// (a) Inputs and outputs
//     Inputs : assignment mark, midterm mark, final mark (each out of 100)
//     Outputs: course total (one decimal place) and the word Pass or Fail
//
// (b) Process
//     1. Define constants for the weights (20, 30, 50) and the pass mark (50).
//     2. Read the assignment, midterm and final marks.
//     3. Compute total = (assignment x 20 + midterm x 30 + final x 50) / 100.
//     4. Set result = (total >= 50) ? "Pass" : "Fail"   (conditional operator).
//     5. Print the total with one decimal place, then print the result.
//
// (c) Program

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Constants
    const double ASSIGNMENT_WEIGHT = 20.0;   // percent
    const double MIDTERM_WEIGHT    = 30.0;   // percent
    const double FINAL_WEIGHT      = 50.0;   // percent
    const double PASS_MARK         = 50.0;

    // Input
    double assignment, midterm, finalExam;
    cout << "Enter assignment, midterm and final marks (each out of 100): ";
    cin >> assignment >> midterm >> finalExam;

    // Process
    double total = (assignment * ASSIGNMENT_WEIGHT
                  + midterm    * MIDTERM_WEIGHT
                  + finalExam  * FINAL_WEIGHT) / 100.0;

    string result = (total >= PASS_MARK) ? "Pass" : "Fail";

    // Output
    cout << fixed << setprecision(1);
    cout << "Course total: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;
}

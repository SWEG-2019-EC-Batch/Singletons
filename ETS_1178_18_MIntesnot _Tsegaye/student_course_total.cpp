// Task 1: Student course total
//
// Inputs:  assignment mark, midterm mark, final mark (each out of 100)
// Outputs: course total (1 decimal place) and the word Pass or Fail
//
// Process:
// 1. Read the assignment, midterm and final marks
// 2. total = 0.2 * assignment + 0.3 * midterm + 0.5 * final
// 3. Set the output to 1 decimal place
// 4. Print the total
// 5. Use the conditional operator: if total >= 50 print Pass, otherwise print Fail
//
// Test data: 80, 60, 70 -> 69.0 Pass
//            40, 30, 45 -> 39.5 Fail
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double Assignment_Weight = 0.20;
    const double Midterm_Weight    = 0.30;
    const double Final_Weight      = 0.50;
    const double Pass_Mark         = 50;

    double assignmentMark, midtermMark, finalMark, total;

    cout << "Enter assignment mark (out of 100): ";
    cin >> assignmentMark;
    cout << "Enter midterm mark (out of 100): ";
    cin >> midtermMark;
    cout << "Enter final mark (out of 100): ";
    cin >> finalMark;

    total = assignmentMark * Assignment_Weight
          + midtermMark * Midterm_Weight
          + finalMark * Final_Weight;

    cout << fixed << setprecision(1);
    cout << "Course total: " << total << endl;
    cout << "Result: " << ((total >= Pass_Mark) ? "Pass" : "Fail") << endl;

    return 0;
}
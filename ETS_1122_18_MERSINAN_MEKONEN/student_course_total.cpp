/*

THE C++ PROGRAM THAT CALCULATES STUDENT MARK AND STATUS

Input:

- Assignment mark (out of 100)
- Midterm mark (out of 100)
- Final exam mark (out of 100)

Process:

1. Read the assignment, midterm, and final marks.
2. Calculate 20% of the assignment mark.
3. Calculate 30% of the midterm mark.
4. Calculate 50% of the final mark.
5. Add the three weighted marks to obtain the course total.
6. Compare the course total with the pass mark (50).
7. Determine Pass if the total is greater than or equal to 50;
   otherwise, determine Fail.
8. Display the course total to one decimal place.

Output:

- Course total (one decimal place)
- Pass or Fail

*/

// THE PROGRAM

#include <iostream>
#include <iomanip> // Required for output formatting (fixed, setprecision)

using namespace std;

int main() {
    // 1. Constants: We use constants for values that never change during the program.
  
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_THRESHOLD = 50.0;

    // 2. Variables: Declared as doubles to allow for decimal calculations.
  
    double assignmentMark, midtermMark, finalMark, courseTotal;

    // 3. Input: Ask the user and store their responses.
   
    cout << "Enter assignment mark: ";
  
    cin >> assignmentMark;
    
    cout << "Enter midterm mark: ";
  
    cin >> midtermMark;
    
    cout << "Enter final mark: ";
  
    cin >> finalMark;

    // 4. Process: Multiply each mark by its percentage weight and add them together.
  
    courseTotal = (assignmentMark * ASSIGNMENT_WEIGHT) + (midtermMark * MIDTERM_WEIGHT) + (finalMark * FINAL_WEIGHT);

    // 5. Output Formatting: Force the console to show exactly 1 decimal place.
  
    cout << fixed << setprecision(1);
  
    cout << "Total: " << courseTotal << endl;

    // 6. Conditional Logic: We use the ternary operator ( condition ? true_result : false_result )
    // because standard 'if' statements are not allowed since we didn't cover the topics.
  
    cout << "Status: " << (courseTotal >= PASS_THRESHOLD ? "Pass" : "Fail") << endl;

    return 0;
}

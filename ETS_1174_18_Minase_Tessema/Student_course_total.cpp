/*
TASK 1: STUDENT COURSE TOTAL

  INPUTS AND OUTPUTS

Inputs:
    1. Assignment mark (out of 100).
    2. Midterm mark (out of 100).
    3. Final exam mark (out of 100).

Outputs:
    1. Course total (one decimal place).
    2. Result (Pass or Fail).

   PROCESS

    1. Start the program.
    2. Declare variables for assignment, midterm
       and final marks.
    3. Read assignment, midterm and final marks.
    4. Calculate the course total:
       Total = Assignment * 0.20 + Midterm * 0.30 + Final * 0.50
    5. Use the conditional operator to determine
       whether the student passes or fails.
    6. Display the total to one decimal place.
    7. Display Pass or Fail.
    8. End the program.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
float assig , mid , fin , total;
cout<<"Enter Assignment mark ";
cin>> assig;
cout<< "Enter Midterm mark ";
cin>> mid;
cout<< "Enter Final mark ";
cin>> fin;
total = assig*0.2 + mid*0.3 + fin*0.5;
cout<<fixed<<setprecision(1);
cout<<"Total Mark: "<< total<<endl;
cout<< (total>=50? "Pass" : "Fail")<<endl;
return 0;
}

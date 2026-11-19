/*
====================== INPUTS ======================

1. Employee's basic salary
2. Total working hours
3. Overtime bonus rate
4. User's display selection

====================== OUTPUTS =====================

1. Overtime bonus
2. Gross salary
3. Pension contribution
4. Income tax
5. Net salary
6. Salary penalty
7. Complete salary information

====================== PROCESS =====================

1. Start the program.
2. Declare the required variables.
3. Enter the employee's basic salary.
4. Enter the total number of hours worked.
5. Enter the overtime bonus rate.
6. Calculate the hourly salary rate.
7. Check whether the employee worked overtime.
8. Calculate the overtime bonus if hours exceed 40.
9. Calculate the salary penalty if hours are below 40.
10. Calculate the gross salary.
11. Calculate the pension contribution (7%).
12. Determine the applicable income tax rate.
13. Calculate the income tax.
14. Calculate the net salary.
15. Display the available information options.
16. Receive the user's selection.
17. Use a switch statement to display the requested information.
18. Display an error message for an invalid selection.
19. End the program.

====================================================
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare employee salary variables
    double basicSalary, grossSalary, netSalary;
    double incomeTax, pensionAmount, overtimeRate;

    // Initialize bonus, hourly rate and penalty
    double overtimeBonus = 0;
    double hourlySalary, salaryPenalty = 0;

    int workingHours, displayOption;

    // Receive employee salary information
    cout << "Enter employee's basic salary: ";
    cin >> basicSalary;

    cout << "Enter total working hours: ";
    cin >> workingHours;

    cout << "Enter overtime bonus rate: ";
    cin >> overtimeRate;

    // Determine the employee's hourly salary
    hourlySalary = basicSalary / 40;

    // Calculate overtime bonus or salary penalty
    if (workingHours > 40)
    {
        overtimeBonus = overtimeRate * (workingHours - 40);
    }

    else if (workingHours >= 0 && workingHours < 40)
    {
        salaryPenalty = hourlySalary * (40 - workingHours);
        basicSalary = basicSalary - salaryPenalty;
    }

    // Calculate gross salary
    grossSalary = basicSalary + overtimeBonus;

    // Calculate pension contribution
    pensionAmount = grossSalary * 0.07;

    // Determine income tax according to salary range
    if (grossSalary > 0 && grossSalary <= 3500)
    {
        incomeTax = 0;
    }

    else if (grossSalary > 3500 && grossSalary <= 10000)
    {
        incomeTax = grossSalary * 0.10;
    }

    else if (grossSalary > 10000 && grossSalary <= 25000)
    {
        incomeTax = grossSalary * 0.15;
    }

    else if (grossSalary > 25000 && grossSalary <= 50000)
    {
        incomeTax = grossSalary * 0.20;
    }

    else if (grossSalary > 50000 && grossSalary <= 100000)
    {
        incomeTax = grossSalary * 0.25;
    }

    else if (grossSalary > 100000)
    {
        incomeTax = grossSalary * 0.30;
    }

    // Calculate the employee's final salary
    netSalary = grossSalary - (incomeTax + pensionAmount);

    // Display available information choices
    cout << "\n========== SALARY INFORMATION ==========" << endl;

    cout << "1. Overtime bonus" << endl;
    cout << "2. Gross salary" << endl;
    cout << "3. Pension contribution" << endl;
    cout << "4. Income tax" << endl;
    cout << "5. Net salary" << endl;
    cout << "6. Salary penalty" << endl;
    cout << "7. Display all information" << endl;

    // Receive the user's preferred option
    cout << "\nEnter your selection: ";
    cin >> displayOption;

    // Display the requested salary information
    switch (displayOption)
    {
        case 1:
            cout << "Overtime bonus: " << overtimeBonus << " Birr" << endl;
            break;

        case 2:
            cout << "Gross salary: " << grossSalary << " Birr" << endl;
            break;

        case 3:
            cout << "Pension contribution: " << pensionAmount << " Birr" << endl;
            break;

        case 4:
            cout << "Income tax: " << incomeTax << " Birr" << endl;
            break;

        case 5:
            cout << "Net salary: " << netSalary << " Birr" << endl;
            break;

        case 6:
            cout << "Salary penalty: " << salaryPenalty << " Birr" << endl;
            break;

        case 7:
            cout << "\n========== COMPLETE SALARY REPORT ==========" << endl;

            cout << "Overtime bonus: " << overtimeBonus << " Birr" << endl;
            cout << "Gross salary: " << grossSalary << " Birr" << endl;
            cout << "Pension contribution: " << pensionAmount << " Birr" << endl;
            cout << "Income tax: " << incomeTax << " Birr" << endl;
            cout << "Net salary: " << netSalary << " Birr" << endl;
            cout << "Salary penalty: " << salaryPenalty << " Birr" << endl;

            cout << "============================================" << endl;
            break;

        default:
            cout << "Invalid selection! Please choose between 1 and 7." << endl;
    }

    // Terminate the program
    return 0;
}
/*
 * Salary Calculator
 * -----------------
 * Calculates gross salary, pension, income tax, penalty and net salary
 * from a base salary, hours worked and an overtime (bonus) rate.
 *
 * Rules:
 *   - A standard work week is 40 hours.
 *   - Hours over 40 earn  bonus_rate * extra_hours  (overtime pay).
 *   - Hours under 40 are penalised at  (base_salary / 40) * missing_hours.
 *   - Pension is 7% of gross salary.
 *   - Income tax is a flat percentage of gross, chosen by bracket (see below).
 *
 * All amounts are in Ethiopian Birr.
 */

#include <iostream>
#include <iomanip>
using namespace std;

const int    STANDARD_HOURS = 40;
const double PENSION_RATE   = 0.07;

int main()
{
    double base_sal, gross, net, tax = 0, pension, bonus_rate;
    double ot = 0, base_rate, penalty = 0;
    int hours, choice;

    // ----- Input -----
    cout << "Please enter your base salary: " << endl;
    cin >> base_sal;

    cout << "Please enter the hours worked: " << endl;
    cin >> hours;

    cout << "Please enter the bonus rate: " << endl;
    cin >> bonus_rate;

    // ----- Overtime / penalty -----
    base_rate = base_sal / STANDARD_HOURS;

    if (hours > STANDARD_HOURS)
    {
        ot = bonus_rate * (hours - STANDARD_HOURS);
    }
    else if (0 <= hours && hours < STANDARD_HOURS)
    {
        penalty = base_rate * (STANDARD_HOURS - hours);
        base_sal -= penalty;
    }

    // ----- Gross salary and pension -----
    gross   = base_sal + ot;
    pension = gross * PENSION_RATE;

    // ----- Income tax by bracket -----
    if (0 < gross && gross <= 3500)
    {
        tax = 0;
    }
    else if (3500 < gross && gross <= 10000)
    {
        tax = gross * 0.10;
    }
    else if (10000 < gross && gross <= 25000)
    {
        tax = gross * 0.15;
    }
    else if (25000 < gross && gross <= 50000)
    {
        tax = gross * 0.20;
    }
    else if (50000 < gross && gross <= 100000)
    {
        tax = gross * 0.25;
    }
    else if (gross > 100000)
    {
        tax = gross * 0.30;
    }

    // ----- Net salary -----
    net = gross - (tax + pension);

    // ----- Output menu -----
    cout << fixed << setprecision(2);

    cout << "Choose what you want to display:" << endl;
    cout << "1. Bonus" << endl;
    cout << "2. Gross salary" << endl;
    cout << "3. Pension" << endl;
    cout << "4. Tax" << endl;
    cout << "5. Net salary" << endl;
    cout << "6. Penalty" << endl;
    cout << "7. Display all" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Bonus: " << ot << " birr" << endl;
        break;

    case 2:
        cout << "Gross salary: " << gross << " birr" << endl;
        break;

    case 3:
        cout << "Pension: " << pension << " birr" << endl;
        break;

    case 4:
        cout << "Tax: " << tax << " birr" << endl;
        break;

    case 5:
        cout << "Your salary is: " << net << " birr" << endl;
        break;

    case 6:
        cout << "Your penalty is: " << penalty << " birr" << endl;
        break;

    case 7:
        cout << "Bonus: " << ot << " birr" << endl;
        cout << "Gross salary: " << gross << " birr" << endl;
        cout << "Pension: " << pension << " birr" << endl;
        cout << "Tax: " << tax << " birr" << endl;
        cout << "Your salary is: " << net << " birr" << endl;
        cout << "Penalty: " << penalty << " birr" << endl;
        break;

    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

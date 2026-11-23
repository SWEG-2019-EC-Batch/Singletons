#include <iostream>
using namespace std;

int main()
{
    double gross = 0, net = 0, tax = 0, pension = 0;
    double bonus = 0, penalty = 0;

    double base_sal = 0, base_rate = 0, bonus_rate = 0;

    double hourly_rate = 0, damage_penalty = 0;

    int hours, employee_type, choice;

    cout << "Choose employee type:" << endl;
    cout << "1. Employee" << endl;
    cout << "2. Laborer" << endl;
    cout << "Enter your choice: ";
    cin >> employee_type;

    if (employee_type == 1)
    {
        //  EMPLOYEE 

        cout << "\nPlease enter your base salary: " << endl;
        cin >> base_sal;

        cout << "Please enter the hours worked: " << endl;
        cin >> hours;

        cout << "Please enter the bonus rate per overtime hour: " << endl;
        cin >> bonus_rate;

        base_rate = base_sal / 40;

        if (hours > 40)
        {
            // Overtime bonus
            bonus = bonus_rate * (hours - 40);
        }
        else if (hours >= 0 && hours < 40)
        {
            // Penalty for working fewer than 40 hours
            penalty = base_rate * (40 - hours);
            base_sal -= penalty;
        }

        gross = base_sal + bonus;

        // Employee deductions
        pension = gross * 0.07;

        if (gross > 0 && gross <= 3500)
        {
            tax = 0;
        }
        else if (gross > 3500 && gross <= 10000)
        {
            tax = gross * 0.10;
        }
        else if (gross > 10000 && gross <= 25000)
        {
            tax = gross * 0.15;
        }
        else if (gross > 25000 && gross <= 50000)
        {
            tax = gross * 0.20;
        }
        else if (gross > 50000 && gross <= 100000)
        {
            tax = gross * 0.25;
        }
        else if (gross > 100000)
        {
            tax = gross * 0.30;
        }

        net = gross - (tax + pension);
    }
    else if (employee_type == 2)
    {
        // LABORER 

        cout << "\nPlease enter the hours worked: " << endl;
        cin >> hours;

        cout << "Please enter the hourly rate: " << endl;
        cin >> hourly_rate;

        cout << "Please enter the bonus amount (enter 0 if there is no bonus): " << endl;
        cin >> bonus;

        cout << "Please enter the machinery damage penalty (enter 0 if there is no damage): " << endl;
        cin >> damage_penalty;

        gross = hours * hourly_rate + bonus;
        penalty = damage_penalty;

        net = gross - penalty;
    }
    else
    {
        cout << "Invalid employee type!" << endl;
        return 0;
    }

    // DISPLAY MENU

    cout << "\nChoose what you want to display:" << endl;
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
        cout << "Bonus: " << bonus << " birr" << endl;
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
        cout << "Your net salary is: " << net << " birr" << endl;
        break;

    case 6:
        cout << "Your penalty is: " << penalty << " birr" << endl;
        break;

    case 7:
        cout << "Bonus: " << bonus << " birr" << endl;
        cout << "Gross salary: " << gross << " birr" << endl;
        cout << "Pension: " << pension << " birr" << endl;
        cout << "Tax: " << tax << " birr" << endl;
        cout << "Your net salary is: " << net << " birr" << endl;
        cout << "Penalty: " << penalty << " birr" << endl;
        break;

    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
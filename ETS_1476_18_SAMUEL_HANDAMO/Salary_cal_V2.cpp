#include <iostream>
using namespace std;

int main()
{
    double gross_salary = 0, net_salary = 0, income_tax = 0, pension_fee = 0;
    double overtime_bonus = 0, total_penalty = 0;

    double basic_salary = 0, hourly_basic_rate = 0, overtime_rate = 0;

    double labor_hour_rate = 0, machine_penalty = 0;

    int working_hours, worker_category, menu_choice;

    cout << "Select worker category:" << endl;
    cout << "1. Employee" << endl;
    cout << "2. Laborer" << endl;
    cout << "Your selection: ";
    cin >> worker_category;

    if (worker_category == 1)
    {
        // EMPLOYEE CALCULATION

        cout << "\nEnter basic salary: ";
        cin >> basic_salary;

        cout << "Enter total working hours: ";
        cin >> working_hours;

        cout << "Enter overtime bonus rate per hour: ";
        cin >> overtime_rate;

        hourly_basic_rate = basic_salary / 40;

        if (working_hours > 40)
        {
            overtime_bonus = overtime_rate * (working_hours - 40);
        }
        else if (working_hours >= 0 && working_hours < 40)
        {
            total_penalty = hourly_basic_rate * (40 - working_hours);
            basic_salary = basic_salary - total_penalty;
        }

        gross_salary = basic_salary + overtime_bonus;

        // Calculate pension
        pension_fee = gross_salary * 0.07;

        // Calculate income tax
        if (gross_salary > 0 && gross_salary <= 3500)
        {
            income_tax = 0;
        }
        else if (gross_salary > 3500 && gross_salary <= 10000)
        {
            income_tax = gross_salary * 0.10;
        }
        else if (gross_salary > 10000 && gross_salary <= 25000)
        {
            income_tax = gross_salary * 0.15;
        }
        else if (gross_salary > 25000 && gross_salary <= 50000)
        {
            income_tax = gross_salary * 0.20;
        }
        else if (gross_salary > 50000 && gross_salary <= 100000)
        {
            income_tax = gross_salary * 0.25;
        }
        else if (gross_salary > 100000)
        {
            income_tax = gross_salary * 0.30;
        }

        net_salary = gross_salary - (income_tax + pension_fee);
    }
    else if (worker_category == 2)
    {
        // LABORER CALCULATION

        cout << "\nEnter total working hours: ";
        cin >> working_hours;

        cout << "Enter payment rate per hour: ";
        cin >> labor_hour_rate;

        cout << "Enter bonus amount (0 if none): ";
        cin >> overtime_bonus;

        cout << "Enter machinery damage penalty (0 if none): ";
        cin >> machine_penalty;

        gross_salary = (working_hours * labor_hour_rate) + overtime_bonus;

        total_penalty = machine_penalty;

        net_salary = gross_salary - total_penalty;
    }
    else
    {
        cout << "Invalid worker category!" << endl;
        return 0;
    }

    // DISPLAY MENU

    cout << "\nSelect the information you want to display:" << endl;
    cout << "1. Bonus" << endl;
    cout << "2. Gross salary" << endl;
    cout << "3. Pension" << endl;
    cout << "4. Tax" << endl;
    cout << "5. Net salary" << endl;
    cout << "6. Penalty" << endl;
    cout << "7. Display all information" << endl;

    cout << "Enter your choice: ";
    cin >> menu_choice;

    switch (menu_choice)
    {
    case 1:
        cout << "Bonus: " << overtime_bonus << " birr" << endl;
        break;

    case 2:
        cout << "Gross salary: " << gross_salary << " birr" << endl;
        break;

    case 3:
        cout << "Pension: " << pension_fee << " birr" << endl;
        break;

    case 4:
        cout << "Tax: " << income_tax << " birr" << endl;
        break;

    case 5:
        cout << "Your net salary is: " << net_salary << " birr" << endl;
        break;

    case 6:
        cout << "Your penalty is: " << total_penalty << " birr" << endl;
        break;

    case 7:
        cout << "Bonus: " << overtime_bonus << " birr" << endl;
        cout << "Gross salary: " << gross_salary << " birr" << endl;
        cout << "Pension: " << pension_fee << " birr" << endl;
        cout << "Tax: " << income_tax << " birr" << endl;
        cout << "Your net salary is: " << net_salary << " birr" << endl;
        cout << "Penalty: " << total_penalty << " birr" << endl;
        break;

    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
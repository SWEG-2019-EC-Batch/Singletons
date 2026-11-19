/*
  INPUTS:
1. Base salary (base_sal)
2. Number of hours worked (hours)
3. Bonus rate (bonus_rate)
4. Display choice (choice)

 OUTPUTS:
1. Bonus
2. Gross salary
3. Pension
4. Tax
5. Net salary
6. Penalty
7. All results

 PROCESS:
1. Start the program.
2. Declare the necessary variables.
3. Enter the base salary.
4. Enter the number of hours worked.
5. Enter the bonus rate.
6. Calculate the base hourly rate by dividing
   the base salary by 40.
7. If hours worked are greater than 40,
   calculate the overtime bonus.
8. If hours worked are less than 40,
   calculate the penalty and deduct it
   from the base salary.
9. Calculate the gross salary by adding
   the adjusted base salary and bonus.
10. Calculate pension as 7% of gross salary.
11. Calculate income tax based on the
    applicable tax rate.
12. Calculate net salary by subtracting
    tax and pension from gross salary.
13. Display the available output options.
14. Ask the user to enter their choice.
15. Use a switch statement to display
    the selected result.
16. If the choice is invalid, display
    an invalid choice message.
17. End the program.
*/


#include<iostream>
using namespace std;

int main()
{
    double base_sal, gross, net, tax, pension, bonus_rate;
    double ot = 0, base_rate, penalty=0;
    int hours, choice;

    cout<<"Please enter your base salary: "<<endl;
    cin>>base_sal;

    cout<<"Please enter the hours worked: "<<endl;
    cin>>hours;

    cout<<"Please enter the bonus rate: "<<endl;
    cin>>bonus_rate;
    base_rate=base_sal/40;
    if (hours>40)
    {
        ot=bonus_rate*(hours-40);
    }
    
    else if(0<=hours&&hours<40)
    {
        penalty=base_rate*(40-hours);
        base_sal-=penalty;
        
    }

    gross=base_sal + ot;
    pension = gross * 0.07;

    if (0 < gross && gross <= 3500)
    {
        tax=0;
    }
    else if (3500<gross && gross<=10000)
    {
        tax=gross*0.1;
    }
    else if (10000<gross && gross<=25000)
    {
        tax=gross*0.15;
    }
    else if (25000<gross && gross<=50000)
    {
        tax=gross*0.20;
    }
    else if (50000<gross && gross<=100000)
    {
        tax=gross*0.25;
    }
    else if (100000<gross)
    {
        tax=gross*0.30;
    }

    net=gross-(tax+pension);

    cout<<"Choose what you want to display:"<<endl;
    cout<<"1. Bonus"<<endl;
    cout<<"2. Gross salary"<<endl;
    cout<<"3. Pension"<<endl;
    cout<<"4. Tax"<<endl;
    cout<<"5. Net salary"<<endl;
    cout<<"6. Penalty"<<endl;
    cout<<"7. Display all"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        cout<<"Bonus: "<<ot<<" birr"<<endl;
        break;

    case 2:
        cout<<"Gross salary: "<<gross<<" birr"<<endl;
        break;

    case 3:
        cout<<"Pension: "<<pension<<" birr"<<endl;
        break;

    case 4:
        cout<<"Tax: "<<tax<<" birr"<<endl;
        break;

    case 5:
        cout<<"Your salary is: "<<net<<" birr"<<endl;
        break;
    case 6:
        cout<<"Your penalty is: "<<penalty<<" birr"<<endl;
        break;

    case 7:
        cout<<"Bonus: "<<ot<<" birr"<<endl;
        cout<<"Gross salary: "<<gross<<" birr"<<endl;
        cout<<"Pension: "<<pension<<" birr"<<endl;
        cout<<"Tax: "<<tax<<" birr"<<endl;
        cout<<"Your salary is: "<<net<<" birr"<<endl;
        cout<<"Penalty: "<<penalty<<" birr"<<endl;
        break;

    default:
        cout<<"Invalid choice!"<<endl;
    }

    return 0;
}
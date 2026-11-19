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
// BANK MANAGEMENT SYSTEM
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

class bank
{
    char name[100], add[100], y;
    int balance;

public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
    void exit();
};

void bank::open_account()
{
    cout << "Enter your full name :: ";
    cin.ignore();
    cin.getline(name, 100);
    cout << "Enter your address :: ";
    cin.ignore();
    cin.getline(add, 100);
    cout << "What type of account you want to open saving(s) or current(c)?";
    cin >> y;
    cout << "Enter amount for deposit :: ";
    cin >> balance;
    cout << "Your account is created" << endl;
}

void bank::deposit_money()
{
    int a;
    cout << "Enter how much you want to deposit: ";
    cin >> a;
    balance += a;
    cout << "Total ammount you deposit: " << balance << endl;
}

void bank::display_account()
{
    cout << "Your full name: " << name << endl;
    cout << "Your address: " << add << endl;
    cout << "Type of account that you open: " << y << endl;
    cout << "Ammount you deposit: " << balance << endl;
}

void bank::withdraw_money()
{
    float amount;
    cout << "Withdraw" << endl;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    balance -= amount;
    cout << "Now, total amount is left: " << balance << endl;
}

int main()
{
    int ch, x;
    bank obj;

    cout << "\n\n\t\tBank Management System" << endl;

    do
    {
        cout << "\n\n1. Open Account" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Display Account" << endl;
        cout << "5. Exit" << endl;
        cout << "Select the option from above";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "1. Open Account" << endl;
            obj.open_account();
            break;

        case 2:
            cout << "2. Deposit Money" << endl;
            obj.deposit_money();
            break;

        case 3:
            cout << "3. Withdraw Money" << endl;
            obj.withdraw_money();
            break;

        case 4:
            cout << "4. Display Account" << endl;
            obj.display_account();
            break;

        case 5:
            if (ch == 5)
            {
                exit(1);
            }

        default:
            cout << "This is not exist, try again" << endl;
        }
        cout << "Do you want to select next option then press y" << endl;
        cout << "If you want to exit then press n" << endl;
        x = getch();
        if (x == 'n' || x == 'N')
        {
            exit(0);
        }
    } while (x == 'y' || x == 'Y');

    getch();
    return 0;
}

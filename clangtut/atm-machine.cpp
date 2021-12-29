#include <iostream> // input-output stream it helps in entring the input and taking output
#include <conio.h>  // for getch() which can hold the screen until the user press any key
#include <string>   // we are using strings in this project so that we use this
using namespace std;
/* Mini Project - ATM
    -> Check Balance
    -> Cash Withdraw
    -> User Details
    -> Update Mobile No.
*/

class atm
{
private: // private member variables
    long int account_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;

public:
    void setData(long int account_no_a, string name_a, int PIN_a, double balance_a, string mobile_no_a)
    { // assigning formal arguments to the private
        account_No = account_no_a;
        name = name_a;
        PIN = PIN_a;
        balance = balance_a;
        mobile_No = mobile_no_a;
    }

    long int getAccountNo()
    {
        return account_No;
    }

    string getName()
    {
        return name;
    }

    int getPIN()
    {
        return PIN;
    }

    double getBalance()
    {
        return balance;
    }

    string getMobileNo()
    {
        return mobile_No;
    }

    // setMobile function is to Update the user mobile no.
    void setMobile(string mob_prev, string mob_new)
    {
        if (mob_prev == mob_new) // it will check wheather the previous mobile number is correct or not.
        {
            mobile_No = mob_new; // if the mobile number is correct then the new mobile number will be given
            cout << "The Mobile Number has successfully changed";
            getch();
        }
        else
        {
            cout << endl
                 << "Incorrect Old Mobile Number  :( ";
            getch();
        }
    }

    void cashWithDraw(int amount_a)
    {
        if (amount_a > 0 && amount_a < balance)
        {
            balance = balance - amount_a;
            cout << "Please Collect your cash..." << endl;
            cout << "The Available Balance is :- " << balance;
            getch();
        }

        else
        {
            cout << endl
                 << "Enter Valid Amount or Insufficient Balance";
            getch();
        }
    }
};

int main()
{
    int choice = 0, enterPIN;
    long int enterAccountNo;
    clrscr();

    atm user1;
    user1.setData(1234567, "Krishn Kumar", 1234, 45000, "9518297071");

    do
    {
        clrscr();
        cout << endl
             << "****Welcome to ATM****" << endl;
        cout << endl
             << "Enter your Account Number : ";
        cin >> enterAccountNo;

        cout << endl
             << "Enter PIN : ";
        cin >> enterPIN;

        // check wheter the account details are matching with the registered user
        if ((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN()))
        {
            do
            {
                int amount = 0;
                string oldMobileNo, newMobileNo;

                clrscr();
                // User Interface
                cout << endl
                     << "**** Welcome to ATM ****";
                cout << endl
                     << "Select Options";
                cout << endl
                     << "1. Check Balance";
                cout << endl
                     << "2. Cash Withdrawl";
                cout << endl
                     << "3. Show User Details";
                cout << endl
                     << "4. User Mobile No.";
                cout << endl
                     << "5. Exit" << endl;
                cin >> choice;

                switch (choice)
                {
                case 1:
                    cout << "Your Bank Balance is :- " << user1.getBalance();
                    system("pause>nul");
                    break;
                case 2:
                    cout << "Enter amount : ";
                    cin >> amount;
                    user1.cashWithDraw(amount);
                    break;
                case 3:
                    cout << endl
                         << "**** User Details are ****";
                    cout << endl
                         << "-> Account no " << user1.getAccountNo();
                    cout << endl
                         << "-> Name       " << user1.getName();
                    cout << endl
                         << "-> PIN         " << user1.getPIN();
                    cout << endl
                         << "-> Balance    " << user1.getBalance();
                    cout << endl
                         << "-> Mobile No   " << user1.getMobileNo();
                    getch();
                    break;
                case 4:
                    cout << "Enter Old Mobile Number :- ";
                    cin >> oldMobileNo;

                    cout << "Enter New Mobile Number :- ";
                    cin >> newMobileNo;

                    user1.setMobile(oldMobileNo, newMobileNo);
                    break;

                case 5:
                    exit(0);

                default:
                    cout << endl
                         << "Enter Valid Data !!!";
                }

            } while (1);
        }
        else
        {
            cout << endl
                 << "User Details are Invalid !!!";
            getch();
        }
    } while (1);

    return 0;
}
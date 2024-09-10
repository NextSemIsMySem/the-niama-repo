//library include
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

int pay_decision() 
{ 
   //DISPLAYS CHOICES FOR SELECTION
    cout << "-----[Please Select Payment method]-----" << endl;
    cout << setfill('.');
    cout << "|" << "1." << setw(36) << right << "Credit Card" << "|" << endl;
    cout << setfill('.');
    cout << "|" << "2." << setw(36) << right << "Debit Card" << "|" << endl;
    cout << setfill('.');
    cout << "|" << "3." << setw(36) << right << "Cash" << "|" << endl;
    cout << setfill('.');
    cout << "|" << "4." << setw(36) << right << "E-Wallet" << "|" << endl;
    cout << "----------------------------------------" << endl;
    //PROMPTS USER TO CHOOSE PAYMENT METHOD
    int choice = 0;
    do {
        cout << "Payment Method : ";
        cin >> choice;

        if (choice < 1 || choice > 4) {
            cout << "Invalid input. Please try again." << endl;
        }
    } while (choice < 1 || choice > 4);
    system("cls");

    return choice;
}

//PAYMENT METHOD
string payMethDec() {
    int pay_type = 0;           //VARIABLE pay_type WILL RECEIVE RETURN VALUE FROM FUNCTION pay_decision()
    string pay_dis = " ";       //pay_dis IS USED TO DISPLAY IN THE TICKET
    pay_type = pay_decision();
    switch(pay_type) {
    case 1:
        pay_dis = "Credit Card";
        break;
    case 2:
        pay_dis = "Debit Card";
        break;
    case 3:
        pay_dis = "Cash";
        break;
    default:
        pay_dis = "E-wallet";
    }

    return pay_dis;
}
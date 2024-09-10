#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string rtc();

void invoice()
{
    string date = rtc();
   
    cout << "-----------------------------------------" << endl;
    cout << "                 INVOICE                 " << endl;
    cout << "-----------------------------------------" << endl;
    cout << setw(13) << left << "Invoice ID: " << setw(10) << left << "1" << setw(18) << right << date << endl;
    cout << setw(23) << left << "Items" << setw(18) << right << "Price (RM)" << endl;
    cout << setw(15) << left << "1. Adult Ticket " << setw(1) << "(" << setw(2) << "1"  << setw(5) << " x 25" << setw(1) << ")" << setw(16) << right << "99.90" << endl;
    cout << setw(15) << left << "2. Child Ticket " << setw(1) << "(" << setw(2) << "1"  << setw(5) << " x 15" << setw(1) << ")" << setw(16) << right << "99.90" << endl;
    cout << setw(41) << right << "--------" << endl;
    cout << setw(23) << left << "Subtotal" << setw(18) << right << "99.90" << endl;
    cout << setw(23) << left << "Discount" << setw(11) << right << "-" << setw(7) << right << "99.90" << endl;
    cout << setw(23) << left << "Service Charge (5%)" << setw(11) << right << "-" << setw(7) << right << "99.90" << endl;
    cout << setw(23) << left << "Tax" << setw(11) << right << "-"<< setw(7) << right << "99.90" << endl;
    cout << setw(41) << right << "--------" << endl;
    cout << setw(13) << left << "Total Items: " << setw(7) << left << "4" << endl;
    cout << setw(23) << left << "Total Payable: " << setw(18) << right << "99.90" << endl;
    cout << "-----------------------------------------" << endl;
}

string rtc(){
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);

    char output[50];

    strftime(output, 50, "%d/%m/%Y", &datetime);
    
    return output;
}
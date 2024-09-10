//library include
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

void invoice();
void receipt();

//file include
#include "paydecision.h"
#include "invoicedisp.h"

int main() {
    
    invoice();
    pay_decision();
    receipt();

    cout << "byebye" << endl;
    return 0;
}

//RECEIVE ALL REQUIRED INFO FROM RELEVANT FUNCITONS AND DISPLAY RECEIPT
void receipt() 
{
    //MOVIE TITLE


    //DATE


    //TIME


    //HALL


    //SEAT NUMBER


    //TICKET PRICE


    //PAYMENT METHOD
    string pay_dis = payMethDec();

    //RELEVANT INFORMATION DISPLAYED INTO A TICKET FORMAT
        cout << "--------------------------------------" << endl;
        cout << "                RECEIPT               " << endl;
        cout << "--------------------------------------" << endl;
        cout << setw(20) << left << "Movie Title: " << setw(18) << right << " " << endl;
        cout << setw(20) << left << "Time: " << setw(18) << right << " " << endl;
        cout << setw(20) << left << "Hall: " << setw(18) << right << " " << endl;
        cout << setw(20) << left << "Seat ID: " << setw(18) << right << " " << endl;
        cout << setw(20) << left << "Price(RM): " << setw(18) << right << " " << endl;
        cout << setw(20) << left << "Payment Method: " << setw(18) << right << pay_dis << endl;
        cout << "--------------------------------------" << endl;

}


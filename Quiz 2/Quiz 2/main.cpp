//
//  main.cpp
//  Quiz 2
//
//  Created by Nico  Hamilton  on 10/28/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    //Declare and initialize var
    int smallQty, mediumQty, largeQty;
    double taxRate;
    double smallPrice = 2.25;
    double mediumPrice = 3.00;
    double largePrice = 3.75;
    
    //Welcome Message
    cout << "****** Welcome to the Coffee Shop Order Calculator ******" << endl;
   
    //Collect Input
    cout << "Enter number of small coffees: ";
    cin >> smallQty;
    cout << "Enter number of medium coffees: ";
    cin >> mediumQty;
    cout << "Enter number of large coffees: ";
    cin >> largeQty;
    cout << "Enter tax rate (%): ";
    cin >> taxRate;
    
    //Calculate Costs
    double smallTotal = smallQty * smallPrice;
    double mediumTotal = mediumQty * mediumPrice;
    double largeTotal = largeQty * largePrice;
    double subtotal = smallTotal + mediumTotal + largeTotal;
    double taxAmount = (taxRate / 100.0) * subtotal;
    double total = subtotal + taxAmount;
    
    //Display
    cout << endl;
    cout << "================= COFFEE ORDER RECEIPT =================" << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << setw(30) << setfill('.') << left << "Small Coffees:" << "$" << smallTotal << endl;
    cout << setw(30) << setfill('.') << left << "Medium Coffees:" << "$" << mediumTotal << endl;
    cout << setw(30) << setfill('.') << left << "Large Coffees:" << "$" << largeTotal << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << setw(30) << setfill('.') << left << "Subtotal:" << "$" << subtotal << endl;
    cout << setw(30) << setfill('.') << left << "Tax (" << taxRate << "%):" << "$" << taxAmount << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << setw(30) << setfill('.') << left << "Total Amount Due:" << "$" << total << endl;
    cout << "========================================================" << endl;
    cout << "Thank you for supporting your local coffee" << endl;
    
    return 0;
}

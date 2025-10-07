//
//  main.cpp
//  Assignment 2 Problem 1
//
//  Created by Nico  Hamilton  on 10/2/25.
//

#include <iostream>
# include <string>
using namespace std;

int main () {
    // Display Welcome Message
    cout << "***************** Welcome to Nico's Sports Store *****************" << endl;
    
    // Display Items and Prices
    string item1, item2, accessory;
    double price1 = 0; double price2 = 0; double price3 = 0;
    
    // Item 1
    cout << "Enter the name of Sports Item #1: " << endl;
    getline(cin, item1);
    cout << "Enter the price of Sports Item #1: " << endl;
    cin >> price1;
    cin.ignore();
    
    // Item 2
    cout << "Enter the name of Sports Item #2: " << endl;
    getline(cin, item2);
    cout << "Enter the price of Sports Item #2: " << endl;
    cin >> price2;
    cin.ignore();
    
// Accessory
    cout << "Enter the name of a Sports Accessory: " << endl;
    getline(cin, accessory);
    cout << "Enter the price of a Sports Accessory: " << endl;
    cin >> price3;
    cin.ignore();  

    // Calculating Prices and Tax
    double subtotal = price1 + price2 + price3;
    double tax = subtotal * 0.095;
    double Total = subtotal + tax;

    // Invoice
    cout << "***************** Sports Store Invoice *****************" << endl;
    cout << item1 << " $" << price1 << endl;
    cout << item2 << " $" << price2 << endl;
    cout << accessory << " $" << price3 << endl;
    cout << "********************************************************" << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax (9.5%): $" << tax << endl;
    cout << "Total: $" << Total << endl;
    cout << "********************************************************" << endl;
    cout << "Thank you for shopping with us!" << endl;
    
    return 0;
}

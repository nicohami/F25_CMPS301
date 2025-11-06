//
//  main.cpp
//  Mid Term Question 1
//
//  Created by Nico  Hamilton  on 11/6/25.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string customerName;
    int numItems;
    char member;
    double priceperItem, subtotal, discount = 0.0, memberDiscount = 0.0, finalTotal;
    
    // Display Welcome Message
    cout << "****** Welcome to the Tech Store Invoice Calculator ******" << endl;
    
    // Ask the User
    cout << "Enter customer name: ";
    getline(cin, customerName);
    
    cout << "Enter number of items: ";
    cin >> numItems;
    
    cout << "Enter price per item: ";
    cin >> priceperItem;
    
    cout << "Are you a store member (Y/N)?: ";
    cin >> member;
    
    // Calculations
    subtotal = priceperItem * numItems;
    
    // Determine Discout
    if (subtotal > 500) {
        discount = subtotal * .10;
    } else if (subtotal > 300) {
        discount = subtotal * .05;
    } else {
        discount = 0.0;
    }
    
    double discountedTotal = subtotal - discount;
    
    // Member Discount
    if (member == 'Y' || member == 'y') {
        memberDiscount = discountedTotal *.05;
    }
        
        // Final Total
        finalTotal = discountedTotal - memberDiscount;
        
        // Output Format
        cout << fixed << showpoint << setprecision(2);
        cout << "============== PURCHASE INVOICE ==============" << endl;
        cout << left << setw(30) << setfill('.') << "Customer Name:" << customerName << endl;
        cout << left << setw(30) << setfill('.') << "Items Purchased:" << numItems << endl;
        cout << left << setw(30) << setfill('.') << "Price Per Item:" << "$" << priceperItem << endl;
        cout << left << setw(30) << setfill('.') << "Subtotal:" << "$" << subtotal << endl;

        // Display discounts
        if (subtotal > 500)
            cout << left << setw(30) << setfill('.') << "Discount Applied:" << "10%" << endl;
        else if (subtotal > 300)
        cout << left << setw(30) << setfill('.') << "Discount Applied:" << "5%" << endl;
        else
        cout << left << setw(30) << setfill('.') << "Discount Applied:" << "None" << endl;
        if (member == 'Y' || member == 'y')    cout << left << setw(30) << setfill('.') << "Membership Discount:" << "5%" << endl;
        cout << left << setw(30) << setfill('.') << "Membership Discount:" << "None" << endl;
        cout << "---------------------------------------------" << endl;
        cout << left << setw(30) << setfill('.') << "Final Total:" << "$" << finalTotal << endl;
        cout << "=============================================" << endl;
        cout << "Thank you for shopping with us!" << endl;
    
    return 0;
}

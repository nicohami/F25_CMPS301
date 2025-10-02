//
//  main.cpp
//  Assignment 1 problem 3
//
//  Created by Nico  Hamilton  on 10/1/25.
//

#include <iostream>
using namespace std;
int main () {

// Declare and initialize variables
double paycheck = 3000.00;
    double rent = 900.00;
    double groceries = 350.00;
    double utilities = 150.00;
    double transportation = 120.00;
    double entertainment = 100.00;
    double subscriptions = 50.00;
    double insurance = 200.00;
    double misc = 80.00;
    double savingsPercent = .20;
    
    // Calculate totalExpenses
    double totalExpenses = rent + groceries + utilities + transportation + entertainment + subscriptions + insurance + misc;
    double remainingBalance = paycheck - totalExpenses;
    double amountToSave = remainingBalance * savingsPercent;
    double finalAmountLeft = remainingBalance - amountToSave;
    
    //Display Results Neatly
    cout << "============================== Monthly Budget ==============================" << endl;
    cout << "Paycheck:              $" << paycheck << endl;
    cout << "                                                                            " << endl;
    cout << "============================== Expenses This Month =========================" << endl;
    cout << "Rent:                  $" << rent << endl;
    cout << "Groceries:             $" << groceries << endl;
    cout << "Utilities:             $" << utilities << endl;
    cout << "Transportation:        $" << transportation << endl;
    cout<< "Entertainment:         $" << entertainment << endl;
    cout << "Subscriptions:         $" << subscriptions << endl;
    cout << "Insurance:             $" << insurance << endl;
    cout << "Miscellaneous:         $" << misc << endl;
    cout << "                                                                            " << endl;
    cout << "============================== Savings This Month ==========================" << endl;
    cout << "Total Expenses:        $" << totalExpenses << endl;
    cout << "Remaining Balance:     $" << remainingBalance << endl;
    
    cout << "You decided to save: " << endl;
    cout << "Amount Saved:          $" << amountToSave << endl;
    cout << "Spending Money Left:   $" << finalAmountLeft << endl;

    
return 0;
}


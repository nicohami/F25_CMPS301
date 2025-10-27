//
//  main.cpp
//  Assignment #3 Problem 2
//
//  Created by Nico  Hamilton  on 10/26/25.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    // Declare and Initialize Var
    double monthlyIncome, rentCost, utilitiesCost, groceriesCost, transportationCost, savingsPercent;
    
    // Welcome Message
    cout << "****** Welcome to the Monthly Budget & Savings Planner ******" << endl;
    
    // Ask the user
    cout << "Enter your monthly income ($): " << endl;
    cin >> monthlyIncome;
    cout << "Enter your rent or mortgage cost ($): " << endl;
    cin >> rentCost;
    cout << "Enter your utilities cost ($): " << endl;
    cin >> utilitiesCost;
    cout << "Enter your groceries cost ($): " << endl;
    cin >> groceriesCost;
    cout << "Enter your transportation cost ($): " << endl;
    cin >> transportationCost;
    cout << "Enter your desired savings goal (% of income): ";
    cin >> savingsPercent;
    
// Calculations
    double totalExpenses = rentCost + utilitiesCost + groceriesCost + transportationCost;
    double savingsGoal = (savingsPercent / 100.0) * monthlyIncome;
    double remainingBalance = monthlyIncome - totalExpenses - savingsGoal;
    
    // Output
    cout << endl;
    cout << "============ Monthly Financial Report ============" << endl;
    cout << fixed << showpoint << setprecision(2);
    
    cout << setw(30) << setfill ('.') << left << "Monthly Income:" << "$" << monthlyIncome << endl;
    cout << setw(30) << setfill ('.') << left << "Rent / Mortgage:" << "$" << rentCost << endl;
    cout << setw(30) << setfill ('.') << left << "Utilities:" << "$" << utilitiesCost << endl;
    cout << setw(30) << setfill ('.') << left << "Groceries:" << "$" << groceriesCost << endl;
    cout << setw(30) << setfill ('.') << left << "Transportation:" << "$" << transportationCost << endl;
    
    cout << "--------------------------------------------" << endl;
    cout << setw(30) << setfill ('.') << left << "Total Expenses:" << "$" << totalExpenses << endl;
    cout << setw(30) << setfill ('.') << left << "Savings Goal:" << "$" << savingsGoal << endl;
    cout << setw(30) << setfill ('.') << left << "Remaining Balance:" << "$" << remainingBalance << endl;
    cout << "============================================" << endl;
    cout << "Smart planning leads to financial freedom!" << endl;

    return 0;
}

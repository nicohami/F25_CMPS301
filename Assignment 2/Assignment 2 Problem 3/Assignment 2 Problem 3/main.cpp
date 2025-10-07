//
//  main.cpp
//  Assignment 2 Problem 3
//
//  Created by Nico  Hamilton  on 10/4/25.
//

#include <iostream>
#include <string>
using namespace std;
int main ()
{
    
// Declare and Initialize var
    string cname1 = " "; string cname2 = " "; string cname3 = " ";
    double hours1;
    double hours2;
    double hours3;
    double hrate1;
    double hrate2;
    double hrate3;
    
// Collecting Inputs
    cout << "****** Welcome to the Freelance Invoice Generator ******" << endl;
    cout << "Enter your name: " << endl;
    cin >> cname1;
    cout << "Enter hours worked: " << endl;
    cin >> hours1;
    cout << "Enter your hourly rate: " << endl;
    cin >> hrate1;
    
    cout << "Enter your name: " << endl;
    cin >> cname2;
    cout << "Enter hours worked: " << endl;
    cin >> hours2;
    cout << "Enter your hourly rate: " << endl;
    cin >> hrate2;

    cout << "Enter your name: " << endl;
    cin >> cname3;
    cout << "Enter hours worked: " << endl;
    cin >> hours3;
    cout << "Enter your hourly rate: " << endl;
    cin >> hrate3;
    
    // Calculations
    double earnings1 = hours1 * hrate1;
    double earnings2 = hours2 * hrate2;
    double earnings3 = hours3 * hrate3;
    
    double totalIncome = earnings1 + earnings2 + earnings3;
    
    // invoice
    cout << " ============== FREELANCER INVOICE ==============" << endl;
    cout << cname1 << " " << hours1 << "hrs @ $" << hrate1 << "/hr = $" <<  earnings1 << endl;
    cout << cname2 << " " << hours2 << "hrs @ $" << hrate2 << "/hr = $" <<  earnings2 << endl;
    cout << cname3 << " " << hours3 << "hrs @ $" << hrate3 << "/hr = $" <<  earnings3 << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Total Income: $" << totalIncome << endl;
    cout << "===============================================";
    cout << "                                          Get rich or die trying" << endl;
    return 0;
}

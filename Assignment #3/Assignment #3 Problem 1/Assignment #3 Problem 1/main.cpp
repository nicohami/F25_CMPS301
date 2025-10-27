//
//  main.cpp
//  Assignment #3 Problem 1
//
//  Created by Nico  Hamilton  on 10/23/25.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    
    //Declae Var
    int rentalDays;
    double dailyRate, insurancePerDay, milesDriven, mileageAllowance, overMileCharge;
    
    // Display Welcome Message
    cout << "************ Welcome to the Car Rental Cost Estimator ************" << endl;
    
    // Collect Inputs
    cout << "Enter number of rental days: ";
    cin >> rentalDays;
    cout << "Enter daily rental rate: ";
    cin >> dailyRate;
    cout << "Enter insureance per day: ";
    cin >> insurancePerDay;
    cout << "Enter total miles driven: ";
    cin >> milesDriven;
    cout << "Enter mileage allowance per day: ";
    cin >> mileageAllowance;
    cout << "Enter over-mileage charge per mile: ";
    cin >> overMileCharge;
    
    // Perfrom Calculations
    double baseCost = rentalDays * dailyRate;
    double InsuranceCost = rentalDays * insurancePerDay;
    double mileageLimit = rentalDays * mileageAllowance;
    double excessMiles = milesDriven - mileageLimit;
    double overageFee = excessMiles * overMileCharge;
    double totalCost = baseCost + InsuranceCost + overageFee;
    
    // Display Output
    cout << fixed << showpoint << setprecision(2);
    cout << endl;
    cout << "============ CAR RENTAL INVOICE ============" << endl;
   
    cout << setw(25) << setfill ('.') << left << "Rental Days:" << rentalDays << endl;
    cout << setw(25) << setfill ('.') << left << "Daily Rate:" << "$" << dailyRate << endl;
    cout << setw(25) << setfill ('.') << left << "Insurance per Day:" << "$" << insurancePerDay << endl;
    
    cout << "--------------------------------------------" << endl;
    
    cout << setw(25) << setfill ('.')<< left << "Base Cost:" << "$" << baseCost << endl;
    cout << setw(25) << setfill ('.') << left << "Insurance Cost:" << "$" << InsuranceCost << endl;
    cout << setw(25) << setfill ('.') << left << "Mileage Limit:" << mileageLimit << " miles" << endl;
    cout << setw(25) << setfill ('.') << left << "Miles Driven:" << milesDriven << " miles" << endl;
    cout << setw(25) << setfill ('.' )<< left <<  "Excess Miles:" << excessMiles << " miles" << endl;
    cout << setw(25) << setfill ('.' )<< left << "Overage Fee:" << "$" << overageFee << endl;
    
    cout << "--------------------------------------------" << endl;
    
    cout << setw(25) << setfill('.') << left << "Total Cost:" << "$" << totalCost << endl;
    cout << "============================================" << endl;
    cout << "Thank you for choosing our rental service!" << endl;
    
    return 0;
}

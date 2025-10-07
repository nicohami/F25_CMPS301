//
//  main.cpp
//  Assignment 2 Problem 2
//
//  Created by Nico  Hamilton  on 10/4/25.
//

#include <iostream>
#include <string>
using namespace std;
int main ()
{
    // Display and Initialize Var
    double milesA, milesB, milesC;
    double mpg, gasPrice, gearWeight;
    
    // Get Trip Detials
    cout << "****** Welcome to the Photography Trip Planner ******" << endl;
    cout << "Miles to Location A: " << endl;
    cin >> milesA;
    
    cout << "Miles to Location B: " << endl;
    cin >> milesB;
    
    cout << "Miles to Location C: " << endl;
    cin >> milesC;
    
    cout << "Fuel Efficiency (MPG): " << endl;
    cin >> mpg;
    
    cout << "Gas price per gallon: " << endl;
    cin >> gasPrice;
    
    cout << "Camera gear weight (lbs): " << endl;
    cin >> gearWeight;
    
    // Calculations
    double totalDistance = milesA + milesB + milesC;
    double fuelCost = (totalDistance / mpg) * gasPrice;
    double weightFee = 0.15 * gearWeight * totalDistance;
    double totalTripCost = fuelCost + weightFee;
    
    // Display Results
    cout << "=========== PHOTOGRAPHY TRIP PLANNER ===========" << endl;
    cout << "Total Distance: " << totalDistance << " miles" << endl;
    cout << "Fuel Efficiency: " << mpg << " MPG" << endl;
    cout << "Gas Price: $" << gasPrice << endl;
    cout << "Camera Gear Weight: " << gearWeight << "lbs" << endl;
    cout << "================================================" << endl;
    cout << "Estimated Fuel Cost: $" << fuelCost << endl;
    cout << "Weight Fee Estimate: " << weightFee << "lbs" << endl;
    cout << "================================================" << endl;
    cout << " Estimated Total Cost: $" << totalTripCost << endl;
    cout << "================================================" << endl;
    cout << "Have a nice trip!" << endl; 
    
    return 0;
}

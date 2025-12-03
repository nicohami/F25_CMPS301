//
//  main.cpp
//  Assignment #4 Problem 1
//
//  Created by Nico  Hamilton  on 12/2/25.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Variables
    string name, gender;
    int age;
    int heightFeet, heightInches;
    double weight;
    
    // Ask the user
    cout << "Please enter your name: ";
    getline(cin,name);
    
    cout << "Please enter your age: ";
    cin >> age;
    
    cout << "Please enter your gender (male/female): ";
    cin >> gender;
    
    cout << "Please enter your height in feet: ";
    cin >> heightFeet;
    
    cout << "Please enter your height in inches: ";
    cin >> heightInches;
    
    cout << "Please enter your weight in pounds: ";
    cin >> weight;
    
    // Convert total height to inches
    int totalInches = (heightFeet * 12) + heightInches;
    
    // Calculate BMI
    double BMI = 703 * weight / (totalInches * totalInches);
    
    // Determine BMI category
    string meaning;
    
    if (BMI < 18.5)
        meaning = "Underweight";
    else if (BMI < 25)
        meaning = "Normal weight";
    else
        meaning = "Obese";
    
    // Output Results
    cout << fixed << setprecision(1);
    cout << "\nHi " << name << "," << endl;
    cout << "You are a " << gender << ". ";
    cout << "You are currently " << heightFeet << "'" << heightInches << "\" and you currently weigh " << weight << " pounds. ";
    cout << "Your BMI is " << BMI << ", which is " << meaning << "." << endl;
    cout << "Thank you for using the BMI Calculator!" << endl; 
    
    return 0;
}

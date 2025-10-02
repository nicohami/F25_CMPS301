//
//  main.cpp
//  Assignment 1 problem 2
//
//  Created by Nico  Hamilton  on 10/1/25. 
//

#include <iostream>
using namespace std;
int main  () {
    
    // Declare and Initialize variables
    string name = "Nico Hamilton ";
    string nName = "Hami";
    string city = "Fontana";
    string color = "Black";
    string dreamdest = "Tokyo, Japan";
    string favfood = "Pizza";
    int age = 18;
    int pets = 1;
    double height =  6.0; // in feet
    double yearsGaming = 10;
    
    // Display the Output
    cout << "====================================== About Me =======================================" << endl;
    cout << "Full Name: " << name << endl;
    cout << "Nickname: " << nName << endl;
    cout << "Age: "  << age << endl;
    cout << "Height: " << height << " foot" << endl;
    cout << "Favorite Color: " << color << endl;
    cout << "City of Birth: " << city << endl;
    cout << "Favorite Food: " << favfood << endl;
    cout << "Number of Pets: " << pets << endl;
    cout << "Years of Gaming: " << yearsGaming << endl;
    cout << "Dream Destination: " << dreamdest << endl;
    cout << "=======================================================================================" << endl;
    
    // Short Paragraph
    cout << "Hi my name is " << name << "but you can call me " << nName << "." << " I am " << age << " years old and I am " << height << " foot." " I was born in " << city << " but my dream desitnation is " << dreamdest << "." " My favorite food it eat is " << favfood << " and I have been gaming for " << yearsGaming << " years." " My favorite color is " << color << " and I have " << pets << " dog.";
    return 0;
}

//
//  main.cpp
//  Assignment 2 Problem 4
//
//  Created by Nico  Hamilton  on 10/4/25.
//

#include <iostream>
#include <string>
using namespace std;
int main ()

{
    //Declare and Initialize var
    string fname, nname, email, city, state, occupation, company, favhobby, favcolor, quote, number;
    
    // Collecting Inputs
    cout << "******** Welcome to the Guest Profile Generator ********" << endl;
    cout << "Enter your full name: " << endl;
    getline(cin, fname);
    cout << "Enter your preferred name / nickname: " << endl;
    getline(cin, nname);
    cout << "Enter your phone number: " << endl;
    getline(cin, number);
    cout << "Enter your city and state: " << endl;
    getline( cin, city);
    cout << "Enter your occupation: " << endl;
    getline(cin, occupation);
    cout << "Enter your company or school: " << endl;
    getline(cin, company);
    cout << "Enter your favorite hobby: " << endl;
    getline(cin, favhobby);
    cout << "Enter your favorite color: " << endl;
    getline(cin, favcolor);
    cout << "Enter a one-line personal quote or motto" << endl;
    getline(cin, quote);
    
    // Displaying info
    cout << "=========== GUEST PROFILE SHEET ===========" << endl;
    cout << "Name:              " << fname << endl;
    cout << "Preffered Name:    " << nname << endl;
    cout << "Email:             " << email << endl;
    cout << "Phone:             " << number << endl;
    cout << "Location:          " << city << state << endl;
    cout << "Occupation:        " << occupation << endl;
    cout << "Company/School:    " << company << endl;
    cout << "Hobby:             " << favhobby << endl;
    cout << "Favorite Color:    " << favcolor << endl;
    cout << "===========================================" << endl;
    cout << "Qoute:             " << quote << endl;
    cout << "===========================================" << endl;
    cout << "Thank you for sharing your profile!" << endl;
    
    return 0;
}

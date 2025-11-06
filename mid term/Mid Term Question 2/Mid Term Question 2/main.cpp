//
//  main.cpp
//  Mid Term Question 2
//
//  Created by Nico  Hamilton  on 11/6/25.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
   
    // Declare Variables
    string studentName;
    double gpa;
    int satScore;
    char extracurricular;
    string decision, reason;
    
    // Display Welcome Message
    cout << "****** Welcome to the College Admission Checker ******" << endl;
    
    // Ask the user
    cout << "Student Name:";
    getline(cin, studentName);
    
    cout << "Enter your GPA:";
    cin >> gpa;
    
    cout << "Enter your SAT score (out of 1600):";
    cin >> satScore;
    
    cout << "Participated in an extracurricular (Y/N)?:";
    cin >> extracurricular;
    
    // Admission Decision
    if (gpa >= 3.5 && satScore >= 1200) {
        decision = "ACCEPTED";
        reason = "Qualified based on GPA and SAT score";
    }
    else if (gpa >= 3.0 && satScore >= 1000 && extracurricular) {
        decision = "ACCEPTED";
        reason = "Qualified based on GPA, SAT, and extracurriculars";
    }
    else {
        decision = "Not eligible";
        reason = "Did not meet admission criteria";
    }
    
    //Output Format
    cout << fixed << showpoint << setprecision(2);
    cout << "============== Admission Result ==============" << endl;
    cout << left << setw(30) << setfill('.') << "Student Name:" << studentName << endl;
    cout << left << setw(30) << setfill('.') << "GPA:" << gpa << endl;
    cout << left << setw(30) << setfill('.') << "Sat Score:" << satScore << endl;
    
    // Yes or No extraxurriculars
    if (extracurricular == 'Y' || extracurricular == 'y')
        cout << left << setw(30) << setfill('.') << "Extracurriculars:" << "Yes" << endl;
    else
        cout << left << setw(30) << setfill('.') << "Extracurriculars:" << "No" << endl;

    cout << "---------------------------------------------" << endl;
    cout << left << setw(30) << setfill('.') << "Admission Decision:" << decision << endl;
    cout << left << setw(30) << setfill('.') << "Reason:" << reason << endl;
    cout << "=============================================" << endl;
    
    // Acceptance Message
    if (decision == "ACCEPTED")
        cout << "Congratulations and best wishes!" << endl;
    else
        cout << "Thank you for applying, we wish you the best!" << endl;
    
    return 0;
}

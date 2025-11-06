//
//  main.cpp
//  Mid Term Question 3
//
//  Created by Nico  Hamilton  on 11/6/25.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
  // Declare variables
    string studentName;
    double score1, score2, score3, finalAverage;
    string letterGrade;
    
    // Display Welcome Message
    cout << "****** Welcome to the Grade Analyzer ******" << endl;
    
    // Collect Input
    cout << "Enter student name:";
    getline(cin, studentName);
    cout << "Enter score for Assignment 1:";
    cin >> score1;
    cout << "Enter score for Assignment 2:";
    cin >> score2;
    cout << "Enter score for Assignment 3:";
    cin >> score3;
    
    // Calculate Final Avg
    finalAverage = (score1 + score2 + score3) / 3.0;
    if (finalAverage >= 97)
        letterGrade = "A+";
        else if (finalAverage >= 93)
            letterGrade = "A";
    else if (finalAverage >= 90)
        letterGrade = "A-";
    else if (finalAverage >= 87)
        letterGrade = "B+";
        else if (finalAverage >= 83)
            letterGrade = "B";
    else if (finalAverage >= 80)
        letterGrade = "B-";
        else if (finalAverage >= 77)
            letterGrade = "C+";
            else if (finalAverage >= 73)
                letterGrade = "C";
        else if (finalAverage >= 70)
            letterGrade = "C-";
        else if (finalAverage >= 60)
            letterGrade = "D";
    else
        letterGrade = "F";
        
        //Output
        cout << fixed << showpoint << setprecision(2);
    cout << "============== Final Grade Report ==============" << endl;
    cout << "CMPS 301: Programming Concepts Fall 2025" << endl;
    cout << left << setw(30) << setfill ('.') << "Student Name:" << studentName << endl;
    cout << left << setw(30) << setfill ('.') << "Assignment 1:" << score1 << endl;
    cout << left << setw(30) << setfill ('.') << "Assignment 2:" << score2 << endl;
    cout << left << setw(30) << setfill ('.') << "Assignment 3:" << score3 << endl;
    cout << "-----------------------------------------------" << endl;
    cout << left << setw(30) << setfill ('.') << "Final Average:" << finalAverage << endl;
    cout << left << setw(30) << setfill ('.') << "Final Grade:" << letterGrade << endl;
    cout << "=================================================" << endl;

    // Closing Message
    if (finalAverage >= 90)
        cout << "Keep up the great work!" << endl;
        else if (finalAverage >= 70)
            cout << "You're doing well - keep improving" << endl;
    else
        cout << "Don't give up! Keep studying and try again!" << endl;
            
            return 0;
}

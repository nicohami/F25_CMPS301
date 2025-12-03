//
//  main.cpp
//  Assignment #4 Problem 2
//
//  Created by Nico  Hamilton  on 12/2/25.
//

#include <iostream>
#include <string>
using namespace std;

int main() {

    // Declare variables
    int month, day, year;
    string monthMeaning, dayMeaning, yearMeaning;
    char again = 'Y';

    cout << "Welcome to Birthday Date Meaning Generator!" << endl;

    while (again == 'Y' || again == 'y') {

        // Collect Input
        cout << "Please enter the month of your birthday (number of month): ";
        cin >> month;

        cout << "Please enter the day of your birthday: ";
        cin >> day;

        cout << "Please enter the year of your birthday: ";
        cin >> year;

        // Month Meaning
        switch (month) {
            case 1: monthMeaning = "Janus"; break;
            case 2: monthMeaning = "Purification"; break;
            case 3: monthMeaning = "Mars"; break;
            case 4: monthMeaning = "Aphrodite"; break;
            case 5: monthMeaning = "Maia"; break;
            case 6: monthMeaning = "Juno"; break;
            case 7: monthMeaning = "Julius Caesar"; break;
            case 8: monthMeaning = "Augustus"; break;
            case 9: monthMeaning = "Harvest Month"; break;
            case 10: monthMeaning = "Decimus"; break;
            case 11: monthMeaning = "Wind Month"; break;
            case 12: monthMeaning = "Winter Month"; break;
            default: monthMeaning = "Unknown Month"; break;
        }

        // Day meaning (1-31)
        switch (day) {
            case 1: dayMeaning = "Independent and Original"; break;
            case 2: dayMeaning = "Cooperative and Sensitive"; break;
            case 3: dayMeaning = "Creative and Expressive"; break;
            case 4: dayMeaning = "Practical and Hardworking"; break;
            case 5: dayMeaning = "Adventurous and Free"; break;
            case 6: dayMeaning = "Nurturing and Responsible"; break;
            case 7: dayMeaning = "Analytical and Intuitive"; break;
            case 8: dayMeaning = "Powerful and Ambitious"; break;
            case 9: dayMeaning = "Compassionate and Giving"; break;
            case 10: dayMeaning = "Confident and Determined"; break;
            case 11: dayMeaning = "Spiritual and Visionary"; break;
            case 12: dayMeaning = "Creative and Social"; break;
            case 13: dayMeaning = "Hardworking and Focused"; break;
            case 14: dayMeaning = "Dynamic and Adaptable"; break;
            case 15: dayMeaning = "Responsible and Caring"; break;
            case 16: dayMeaning = "Deep Thinker and Wise"; break;
            case 17: dayMeaning = "Leader and Independent"; break;
            case 18: dayMeaning = "Humanitarian and Strong"; break;
            case 19: dayMeaning = "Independent and Driven"; break;
            case 20: dayMeaning = "Diplomatic and Thoughtful"; break;
            case 21: dayMeaning = "Creative and Optimistic"; break;
            case 22: dayMeaning = "Master Builder"; break;
            case 23: dayMeaning = "Energetic and Versatile"; break;
            case 24: dayMeaning = "Supportive and Loving"; break;
            case 25: dayMeaning = "Wise and Intuitive"; break;
            case 26: dayMeaning = "Balanced and Responsible"; break;
            case 27: dayMeaning = "Compassionate Leader"; break;
            case 28: dayMeaning = "Independent and Ambitious"; break;
            case 29: dayMeaning = "Emotional and Insightful"; break;
            case 30: dayMeaning = "Expressive and Charming"; break;
            case 31: dayMeaning = "Creative and Practical"; break;
            default: dayMeaning = "Invalid Day"; break;
        }

        // Year meaning
        switch (year) {
            case 2000: yearMeaning = "You are millennial"; break;
            case 2001: yearMeaning = "You are confident"; break;
            case 2002: yearMeaning = "You are balanced"; break;
            case 2003: yearMeaning = "You are expressive"; break;
            case 2004: yearMeaning = "You are dependable"; break;
            case 2005: yearMeaning = "You are adventurous"; break;
            case 2006: yearMeaning = "You are caring"; break;
            case 2007: yearMeaning = "You are insightful"; break;
            case 2008: yearMeaning = "You are ambitious"; break;
            case 2009: yearMeaning = "You are compassionate"; break;
            case 2010: yearMeaning = "You are independent"; break;
            case 2011: yearMeaning = "You are strong-willed"; break;
            case 2012: yearMeaning = "You are imaginative"; break;
            case 2013: yearMeaning = "You are optimistic"; break;
            case 2014: yearMeaning = "You are curious"; break;
            case 2015: yearMeaning = "You are confident"; break;
            case 2016: yearMeaning = "You are determined"; break;
            case 2017: yearMeaning = "You are expressive"; break;
            case 2018: yearMeaning = "You are visionary"; break;
            case 2019: yearMeaning = "You are warm-hearted"; break;
            case 2020: yearMeaning = "You are resilient"; break;
            case 2021: yearMeaning = "You are innovative"; break;
            case 2022: yearMeaning = "You are focused"; break;
            case 2023: yearMeaning = "You are spirited"; break;
            default: yearMeaning = "Invalid Year"; break;
        }

        // Output
        cout << "The month of " << month << " means " << monthMeaning << endl;
        cout << "The " << day << " of the month means " << dayMeaning << endl;
        cout << "The year of " << year << " means that " << yearMeaning << endl;

        cout << "Would you like to try another one? ";
        cin >> again;
        cout << endl;
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}


//
//  main.cpp
//  Quiz 1
//
//  Created by Nico  Hamilton  on 10/1/25.
//

#include <iostream>
using namespace std;
int main () {
// Declare and Initialize variables

// Total minutes in one day
int totalDay = 1440; // 60 * 24

// Minutes spent on each activity
int commute = 60; // 1 hour
int sleep = 480; // 8 hours
int classes = 360; // 3 hours
int homework = 150; // 2 hours 30 minutes
int meals = 90; // 1 hour 30 minutes
int baseball = 75; // 1 hour 15 minutes
int fun = 225; // 4 hours
    
// Remaining time for 'other/unplanned'
int other = totalDay - (commute + sleep + classes + homework + meals + baseball + fun);
    
// Totals
    int productive = classes + homework + baseball;
    int leisure = fun + meals;
    int remaining = other;
    
    // Perecent productive
    double percent = (productive / (double)totalDay) * 100;
    

    // Show activity breakdown (hours and minutes)
    cout << "================ MY PRODUCTIVE DAY SIMULATION ================" << endl;
        cout << "Activity Breakdown:" << endl;
    cout << "Commute:  " << commute/60  << " hrs " << commute%60  << " min " << endl;
    cout << "Sleep:  " << sleep/60  << " hrs " << sleep%60  << " min " << endl;
    cout << "Classes:  " << classes/60  << " hrs " << classes%60  << " min " << endl;
    cout << "Homework:  " << homework/60  << " hrs " << homework%60  << " min " << endl;
    cout << "Meals:  " << meals/60  << " hrs " << meals%60  << " min " << endl;
    cout << "Baseball:  " << baseball/60  << " hrs " << baseball%60  << " min " << endl;
    cout << "Fun:  " << fun/60  << " hrs " << fun%60  << " min " << endl;
    cout << "Other:  " << other/60  << " hrs " << other%60  << " min " << endl;

    cout << "========================================================================================" << endl;
    cout << "Total Time Used: " << totalDay / 60 << " hrs" << totalDay % 60 << " min " <<endl;
    cout << "Productive Time: " << productive/60 << " hrs " << productive%60 << " min " << endl;
    cout << "Leisure Time: " << leisure/60 << " hrs " << leisure%60 << " min " << endl;
    cout << "Remaining Time: " << remaining/60 << " hrs " << remaining%60 << " min " << endl;
    cout << "You used: " << percent << "% of your day productively!" << endl;
    cout << "========================================================================================" << endl;
    
return 0;
}

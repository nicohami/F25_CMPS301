//
//  main.cpp
//  Final Project
//
//  Created by Nico  Hamilton  on 12/1/25.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX_TASKS = 50;

struct Task {
    string name;
    bool done;
};
    
int main () {
    Task tasks[MAX_TASKS];
    int taskCount = 0;
    
    int choice = 0;
    string temp; // clear input when needed
    
    while (true) {
        
        
        cout << "=============================\n";
        cout << "     SIMPLE TASK MANAGER     \n";
        cout << "=============================\n";
        
        cout << "Menu:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Done\n";
        cout << "4. Edit Task \n";
        cout << "5. Exit\n";
        
        cout << "Choose an option: ";
        
        string input;
        getline(cin, input); // where you type
        if (input == "") continue; // avoid empty input crash
        choice = stoi(input);
        
        // Add Task
        if (choice == 1) {
            if (taskCount >= MAX_TASKS) {
                cout << "Task list full. Cannot add more\n";
                continue;
            }
            
            cout << "Enter task name: ";
            string name;
            getline(cin, name);
            
            tasks[taskCount].name = name;
            tasks[taskCount].done = false;
            taskCount++;
            
            cout << "Task added!\n";
            
        }
        
        // View tasks
        else if (choice == 2){
            if (taskCount == 0) {
                cout << "No tasks yet\n";
            } else {
                cout << "\nYour Tasks:\n";
                cout << "---------------------------------\n";
                
                int completed = 0;
                
                for (int i = 0; i < taskCount; i++) {
                    cout << setw(2) << i + 1 << ". "
                    << setw(25) << left << tasks[i].name;
                    
                    if (tasks[i].done) {
                        cout << "  [DONE}\n";
                        completed++;
                    } else {
                        cout << "  [NOT DONE}\n";
                    }
                }
                
                double percent = (taskCount == 0)
                ? 0
                : (completed * 100.0 / taskCount);
                cout << "\nProgress: " << fixed << setprecision(1)
                << percent << "% complete\n";
            }
        }
        
        // Mark Done
        else if (choice == 3) {
            if (taskCount == 0) {
                cout << "No tasks to mark\n";
                continue;
            }
            cout << "Enter task number to mark done: ";
            getline(cin, temp);
            int num = stoi(temp);
            
            if (num < 1 || num > taskCount) {
                cout << "Invalid task number.\n";
            } else {
                tasks[num - 1].done = true;
                cout << "Task marked as done.\n";
            }
        }
        
        // Edit Task
        else if (choice == 4) {
            if (taskCount == 0) {
                cout << "No tasks to edit.\n";
                continue;
            }
            
            cout << "Enter task number to edit: ";
            getline(cin, temp);
            int num = stoi(temp);
            
            if (num < 1 || num > taskCount) {
                cout << "Invalid task number.\n";
            } else {
                cout << "Current name: " << tasks[num - 1].name << "\n";
                cout << "Enter new name: ";
                string newName;
                getline(cin, newName);
                
                tasks[num -1].name = newName;
                cout << "Task updated.\n";
            }
        }
        // Exit
        else if (choice == 5) {
            cout << "Exiting program. Goodbye!\n";
            break;
        }
        else {
            cout << "Invalid option. Try again\n";
        }
    }
        return 0;
    }

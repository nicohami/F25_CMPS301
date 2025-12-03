//
//  main.cpp
//  Assignment #4 Problem 3
//
//  Created by Nico  Hamilton  on 12/2/25.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    
    // Display Message
    cout << "=== Basic Math Calculator == \n\n";
    
    string op;
    double a, b;
    
    cout << "Enter an operation (+, -, *, /, %, ^, sin, asin, cos, acos, tan, atan, atan2, sqrt, ceil, abs, floor, max, min, log, log10, log2, round): ";
    cin >> op;
    
    // Operations w 2 inputs
    if (op == "+" || op == "-" || op == "*" || op == "/" || op == "%" ||
        op == "^" || op == "max" || op == "min" || op == "atan2")
    {
        cout << "Enter your first number: ";
        cin >> a;
        cout << "Enter your second number: ";
        cin >> b;

        if (op == "+") cout << "Result: " << a + b << endl;
        else if (op == "-") cout << "Result: " << a - b << endl;
        else if (op == "*") cout << "Result: " << a * b << endl;
        else if (op == "/") {
            if (b == 0) cout << "Error: Division by zero.\n";
            else cout << "Result: " << a / b << endl;
        }
        else if (op == "%") cout << "Result: " << fmod(a, b) << endl;
        else if (op == "^") cout << "Result: " << pow(a, b) << endl;
        else if (op == "max") cout << "Result: " << (a > b ? a : b) << endl;
        else if (op == "min") cout << "Result: " << (a < b ? a : b) << endl;
        else if (op == "atan2") cout << "Result: " << atan2(a, b) << endl;
    }
// Operations with one Input
    else {
        cout << "Enter number: ";
        cin >> a;
        
        if (op == "sin") cout << "Result: " << sin(a) << endl;
        else if (op == "asin") cout << "Result: " << asin(a) << endl;
        else if (op == "cos") cout << "Result: " << cos(a) << endl;
        else if (op == "acos") cout << "Result: " << acos(a) << endl;
        else if (op == "tan") cout << "Result: " << tan(a) << endl;
        else if (op == "atan") cout << "Result: " << atan(a) << endl;
        else if (op == "sqrt") cout << "Result: " << sqrt(a) << endl;
        else if (op == "ceil") cout << "Result: " << ceil(a) << endl;
        else if (op == "abs") cout << "Result: " << fabs(a) << endl;
        else if (op == "floor") cout << "Result: " << floor(a) << endl;
        else if (op == "log") cout << "Result: " << log(a) << endl;
        else if (op == "log10") cout << "Result: " << log10(a) << endl;
        else if (op == "log2") cout << "Result: " << log2(a) << endl;
        else if (op == "round") cout << "Result: " << round(a) << endl;
        else cout << "Unknown operation.\n";
    }
    
    return 0;
}

#include <iostream>
#include "Calculator.hpp"

using namespace std;

void Calculator::getNumbers() {
    cout << "Enter the first number" << endl;
    cin >> A;
    cout << "Enter the second number" << endl;
    cin >> B;
};

double Calculator::add() {
    return A+B;
};

double Calculator::subtract() {
    return A-B;
};

double Calculator::multiply() {
    return A*B;
};

double Calculator::divide() {
    // if second number is zero, return undefined
    if (B == 0) {
        cout << "Undefined!" << endl;
        return 0;
    } else {
        return A/B;
    }
};
#include <iostream>
#include "Calculator.hpp"

using namespace std;

int main () {
    int choice;
    Calculator calc;

    // print options to terminal
    cout << "Select your calculation method from the options below" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter 0 to exit" << endl;

    do {
        cin >> choice;

        switch (choice) {
            case 1:
                calc.getNumbers();
                cout << "Result: " << calc.add() << endl;
                break;
            case 2: 
                calc.getNumbers();
                cout << "Result: " << calc.subtract() << endl;
                break;
            case 3: 
                calc.getNumbers();
                cout << "Result: " << calc.multiply() << endl;
                break;
            case 4:
                calc.getNumbers();
                cout << "Result: " << calc.divide() << endl;
                break;
        }
    } while (choice >= 1 && choice <= 4);

    return 0;
};
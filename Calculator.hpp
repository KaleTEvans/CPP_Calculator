#include <iostream>

using namespace std;

class Calculator {
    double A, B;

    public:
        // ask user for numbers via terminal
        void getNumbers();
        double add();
        double subtract();
        double multiply();
        double divide();
};


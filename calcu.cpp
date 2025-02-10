#include <iostream>
using namespace std;

int main() {
    int numOne, numTwo, operation;
    int ans = 0;

    cout << "Enter first number: ";
    cin >> numOne;

    cout << "Enter operator to be used\n1. +\n2. -\n3. *\n4. /\nOperator: ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> numTwo;

    switch (operation) {
        case 1:
            ans = numOne + numTwo;
            break;

        case 2:
            ans = numOne - numTwo;
            break;

        case 3:
            ans = numOne * numTwo;
            break;

        case 4:
            if (numTwo != 0)
                ans = numOne / numTwo;
            else {
                cout << "Error: Division by zero is not allowed.\n";
                return 1;
            }
            break;

        default:
            cout << "Invalid operator selected.\n";
            return 1;
    }

    cout << "Result: " << ans << endl;

    return 0;
}
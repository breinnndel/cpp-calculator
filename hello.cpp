#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char ope, choice;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    do {
        cout << "Enter an operator (+, -, *, /): ";
        cin >> ope;
        cout << "Enter next number: ";
        cin >> num2;
        
        switch(ope) {
            case '+':
                num1 += num2;
                break;
            case '-':
                num1 -= num2;
                break;
            case '*':
                num1 *= num2;
                break;
            case '/':
                if (num2 != 0)
                    num1 /= num2;
                else {
                    cout << "Error! Division by zero." << endl;
                    continue;
                }
                break;
            default:
                cout << "Invalid operator!" << endl;
                continue;
        }
        
        cout << "Current Result: " << num1 << endl;
        cout << "Do you want to add another number? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Final Result: " << num1 << endl;
    return 0;
}


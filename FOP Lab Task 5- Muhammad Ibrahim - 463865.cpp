#include<iostream>
using namespace std;

int main (){

int x;
do
{
    cout << "enter a number: ";
    cin >> x;
} while (x > 0);

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        double num1, num2, result;
        char operation;

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> num2;

        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                    continue; // Skip to the next iteration
                }
                break;
            default:
                cout << "Invalid operator. Please use +, -, *, or /." << endl;
                continue; 
        }

        cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

        cout << "Do you want to perform another calculation? (y or n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Calculator has now been termiated" << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int start, end;
    int sum = 0;

    cout << "Enter the first number: ";
    cin >> start;

    cout << "Enter the las number: ";
    cin >> end;

    if (start % 2 != 0) {
        start++; 
    }

    int num = start;

    while (num <= end) {
        sum += num;
        num += 2; 
    }

    cout << "Sum of even numbers between " << start << " and " << end << ": " << sum << endl;

    return 0;
}








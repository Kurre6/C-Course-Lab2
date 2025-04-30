#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    //asking user for data
    cout << "Enter first number: ";
    cin  >> a;

    cout << "Enter second number: ";
    cin  >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin  >> op;

    double result;

    //using swich state to do calculations using char value from user
    switch (op) {
      case '+':
        result = a + b;
        break;
      case '-':
        result = a - b;
        break;
      case '*':
        result = a * b;
        break;
      case '/':
        if (b == 0) {
          cout << "Error: Division by zero!\n";
          return 1;
        }
        result = a / b;
        break;
      default:
        cout << "Error: Unknown operator '" << op << "'\n";
        return 1;
    }

    //displaying result from calculation
    cout << "Result: " << result << "\n";
    return 0;
}
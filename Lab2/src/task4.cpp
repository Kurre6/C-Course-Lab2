#include <iostream>
using namespace std;

int main() {
    double n;

    while (true) {

        //asking user for data
        cout << "Enter a number: ";
        cin >> n;

        //if input was not a number exit
        if (!cin) {
            cout << "Invalid input - exiting.\n";
            break;
        }

        //if input was negative stopping
        if (n < 0) {
            cout << "Negative number entered, stopping.\n";
            break;
        }

        //if input was zero skip by using continue
        else if (n == 0) {
            cout << "Zero entered, skipping.\n";
            continue;
        }

        //if all checks pass do the calculation and print it out after that continue the while loop
        else {
            cout << "Square of " << n << " is " << (n * n) << "\n";
        }
    }

    return 0;
}

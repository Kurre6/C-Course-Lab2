#include <iostream>
using namespace std;

int main() {

    //starting value
    int x = 100;

    //pointer 1
    int* p1 = &x;

    //pointer 2
    int* p2 = p1;

    //displaying all of the variables before trying the experiment
    cout << "Before modification:" << endl;
    cout << "x = " << x << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    //experiment
    *p2 = 500;

    //all values after the experiment
    cout << "After doing *p2 = 500;" << endl;
    cout << "x = " << x   << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    return 0;
}

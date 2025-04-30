#include <iostream>
using namespace std;

int main() {

     //defininf variable and a reference pointer
     int a = 100;
     int& refA = a;

     //display everything before experiment
     cout << "Before: a = " << a 
          << ", refA = " << refA << endl;

     refA = 30;

     //display everything after experiment
     cout << "After:  a = " << a 
          << ", refA = " << refA << endl;

     return 0;
}

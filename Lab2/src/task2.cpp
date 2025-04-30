#include <iostream>
using namespace std;

class Swap{
    public:

    //swaping without using pointers or references
    void swapWithoutPR(int a, int b){
        int tmp = a;
        a = b;
        b = tmp;
        cout << a << " " << b << endl;
    }

    //swapping using pointers
    void swapUsingPointers(int *a, int *b){
        int tmp = *a;
        *a = *b;
        *b = tmp;
        cout << a << " " << b << endl;
    }

    //swapping using references
    void swapUsingReferences(int &a, int &b){
        int tmp = a;
        a = b;
        b = tmp;
        cout << a << " " << b << endl;
    }

};

int main(){
    Swap s;
    
    int num1 = 1;
    int num2 = 4;

    s.swapWithoutPR(num1, num2);

    s.swapUsingPointers(&num1, &num2);

    s.swapUsingReferences(num1, num2);

    return 0;
}

/*
Pass-by-value cannot swap the caller’s variables, so it’s only useful for demonstration (or if you only need the swapped inside the function).

Pointers and references both do actually swap the caller’s data.
*/
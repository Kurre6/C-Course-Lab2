#include <iostream>
using namespace std;

int main() {

    //defining the array size
    const int N = 5;

    //defining the array with numbers
    int arr[N] = { 1, 4, 7, 10, 15 };

    //defining empty array for reversed numbers
    int rev[N];

    //creating pointer p for array
    int* p = arr;

    //assign values to rev array using for loop
    for (int i = 0; i < N; ++i) {
        rev[N - 1 - i] = *(p + i);
    }

    //looping through reversed array using pointers
    cout << "Reversed array: ";
    for (int* q = rev; q < rev + N; ++q) {
        cout << *q;
        if (q + 1 < rev + N) cout << ", ";
    }
    cout << endl;

    return 0;
}

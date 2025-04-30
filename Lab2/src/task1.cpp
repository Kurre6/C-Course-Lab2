#include <iostream>
#include <cmath>
using namespace std;

//simple function to multiply two integers
int multiply(int num1, int num2){
    return num1 * num2;
}

//creating a class that uses overloaded * to multiply two doubles
class Multi{
private:
    //class variable for storing the double values
    double d;

public:

    //constructor for Multi class
    Multi(double dv = 0.0) : d(dv) {}

    //using friend function for overloading
    friend Multi operator*(const Multi& lhs, const Multi& rhs);

    //function to display the result
    void display() const {
        cout << d << endl;
    }
};

//defining the overloader functionality
Multi operator*(const Multi& lhs, const Multi& rhs){
    return Multi(lhs.d * rhs.d);
}

//class for multiplier with flag value
class Multiflag{
    //private values used for calculating the result
    private:
        double d;
        int i;
        bool f;
    
    public:
        //constructor for the function
        Multiflag(int iv, double dv, bool fv) : d(dv), i(iv), f(fv) {}

        //using friend to overload << operator
        friend ostream& operator<<(ostream& os, const Multiflag mf);
};

//defining the overloader functionality
ostream& operator<<(ostream& os, const Multiflag mf){

    //this will get the flag value
    bool flag = mf.f;

    //doing the multiplication
    double result = mf.i * mf.d;

    //deciding if we return the multiplication or the floored/ceiled result
    if (!flag) {

        //return multiplied result
        return os << result;
    } else {

        //returning floored/ceiled value
        if (result > 0){
            return os << floor(result);
        }else{
            return os << ceil(result);
        }
    }
}

int main(){

    //some numbers for multiplication
    int num1 = 1;
    int num2 = 3;

    //calling the function/print
    cout << multiply(num1, num2) << endl;

    //defining the values for multiplication by overloaded operator *
    Multi m1(2.1);
    Multi m2(1.1);

    //calling the overload function and displaying the result
    Multi m3 = m1 * m2;
    m3.display();

    //defining values for flag function
    //returning double from multiplication
    Multiflag mf1(2, 2.2, false);

    //returning integer from multiplication
    Multiflag mf2(2, 2.2, true);

    //displaying the results
    cout << mf1 << endl;
    cout << mf2 << endl;

    return 0;
}

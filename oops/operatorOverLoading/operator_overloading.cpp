#include<bits/stdc++.h>
using namespace std;
class Complex {
    public:
        int real;
        int img;
    
        Complex(int r = 0, int i = 0) : real(r), img(i) {};
        Complex operator+(Complex &c) {
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }
};
int main() {
    Complex c1(2, 4);
    Complex c2(3, 5);
    Complex c3;
    c3 = c1 + c2; // operator overloading to add two complex objects.
    cout << c3.real << "+i" << c3.img;
}
/*
    The + operator is overloaded to add two Complex objects.

    operator overloading is the process of redefining the behavior of an existing operator (like +, -, *, etc.) 
    so that it can work with user-defined types (such as classes and structs).

    Operator overloading is a compile-time polymorphism.
*/
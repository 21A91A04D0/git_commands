#include<bits/stdc++.h>
using namespace std;
class Complex {
    private:
        int real;
        int img;
    public:
        Complex(int r = 0, int i = 0) : real(r), img(i) {}
        void display() {
            cout << real << "+i" << img;
        }
        friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main() {
    Complex c1(2, 3);
    Complex c2(3, 5);
    Complex c;
    c = c1 + c2;
    c.display();
}
#include<bits/stdc++.h>
using namespace std;
class Base {
    public:
        Base() {cout << "Non parametrized of Base \n";}
        Base(int x) {cout << "parametrized of Base " << x << endl;}
};
class Derived : public Base {
    public:
        Derived() {cout << "Non Parametrized of derived \n";}
        Derived(int y) {cout << "parametrized of Derived " << y << endl;}
        Derived(int x, int y): Base(x) {
            cout << "parametrized of Derived " << y << endl;
        }
};
int main() {
    //observe the order while calling the derived
    // Derived d;
    // Derived d(10);
    Derived d(2, 3);
}
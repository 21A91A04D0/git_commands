#include<iostream>
using namespace std;

class Base {
    public:
        void fun1() {
            cout << "fun of Base \n";
        }
};
class Derived : public Base {
    public:
        void fun2() {
            cout << "fun of Derived \n";
        }
};
int main() {
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->fun1();
    // ptr->fun2();//Base has no member fun2 that means it access only the Base members even though the object is Derived class;

    /*
    Derived *pt1;
    Base b;
    pt1 = &b;
    This cannot be done because we cannot give base as object to the Derived
    */

}
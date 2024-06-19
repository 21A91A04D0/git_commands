#include<bits/stdc++.h>
using namespace std;

// first parent class;
class Parent1 {
    public:
        void myFunction() {
            cout << "this is first parent class \n";
        }
};

class Parent2 {
    public: 
        void myFunction2() {
            cout << "This is the second parent class \n";
        }
};

// Derived class
class Child : public Parent1, public Parent2 {

};
int main() {
    Child obj;
    obj.myFunction2();
    obj.myFunction();
}

/* A class can also be derived from more than one base class, using a comma-separated list */
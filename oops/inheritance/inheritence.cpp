#include<bits/stdc++.h>
using namespace std;

// base class
class Vehicle {
    public:
        string brand = "BMW";
        void myVehicle() {
            cout << "THIS IS BMW CAR \n" ;
        }
};


//derived class
class Car : public Vehicle {
    public: 
        string model = "123";
};

int main() {
    Car myObj;
    myObj.myVehicle();
    cout << myObj.brand << "\n";
    cout << myObj.model << "\n";
}


/*
Why And When To Use "Inheritance"?
- It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class. */

/*
what is inheritance?

inherit the members(attributes and methods) from another class is known as inheritance

derived class(child):- the class that inherits from another class;
base class(parent) :- the class being inherited;

To inherit from a class we use : symbol
*/
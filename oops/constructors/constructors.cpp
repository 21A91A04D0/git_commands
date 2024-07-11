#include<bits/stdc++.h>
using namespace std;

class Myclass {
    public:
        Myclass() {
            cout << "welcome to constructor" << endl;
        }
};


// contructor with parameters inside class
class Car1 {
    public:
        string brand;
        int year;
        Car1(string x, int n) {
            brand = x;
            year = n;
        }
};

// constructor with parameters outside class
class Car2 {
    public:
        string brand;
        int year;
        Car2(string x, int n);
};

Car2::Car2(string x, int n) {
    brand = x;
    year = n;
}

int main() {

    Myclass myObj; //create an object of Myclass(this will call constructor)


    Car1 myCar1("BMW", 2020);
    Car1 myCar2("audi",2021);
    cout << myCar1.brand << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.year << "\n";


    Car2 myCar("inova",2022);
    cout << myCar.brand <<" " << myCar.year << endl;
    return 0;

    
};

/*
    a constructor is a special member function that is automatically called when an object of a class is created. 
    Constructors do not have return types, not even void.


    key points:
        It has the same name as the class.
        It does not have a return type, not even void.
        It can be overloaded, meaning a class can have more than one constructor with different parameters.
        If no constructors are defined, the compiler provides a default constructor.

    Types of Constructors:
        Default Constructor: A constructor that takes no arguments.
        Parameterized Constructor: A constructor that takes arguments to initialize the object.
        Copy Constructor: A constructor is used to create a new object as a copy of an existing object
*/
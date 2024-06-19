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
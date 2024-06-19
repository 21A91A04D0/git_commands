/*
    A default constructor is a constructor that is automatically called 
    when an object of a class is instantiated without any arguments.
*/

#include<bits/stdc++.h>
using namespace std;

class DefConstructor {
    private:
        int data;

    public:
        DefConstructor() : data(10) { // initializes data with default value
            cout << "default constructor called \n";
        }
        // getter function
        int getData() {
            return data;
        }
};

int main() {
    DefConstructor obj;
    cout << obj.getData() << "\n";
}

/*
    a constructor is a special member function that is automatically called when an object of a class is created.
    Its primary purpose is to initialize the object's data members and set up the object for use. 
    Constructors do not have return types, not even void.
*/
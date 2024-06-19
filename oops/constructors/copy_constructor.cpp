#include<iostream>

using namespace std;

class Myclass {
    private:
        int data;
    public:
        // Default Constructor
        Myclass() : data(0) {
            cout << "default constructor is called \n";
        }
        // Parametrized constructor
        Myclass(int val) : data(val) {
            cout << "Parametrized constructor is called \n";
        }
        // copy Constructor

        Myclass(Myclass &obj) {
            data = obj.data;
            cout << "Copy constructor is called \n";
        }

        int getData() {
            return data;
        }
};

int main() {
    // Create an object using the default constructor
    Myclass obj1;
    cout << "Data in obj1: " << obj1.getData() << "\n";
    // Create another object using the parameterized constructor
    Myclass obj2(30);
    cout << "Data in obj2: " << obj2.getData() << "\n";
    // Create a third object using the copy constructor
    Myclass obj3(obj2);// Calls the copy constructor
    cout << "Data in obj3: " << obj3.getData() << "\n";
}
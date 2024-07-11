#include<bits/stdc++.h>
using namespace std;

//common uses of scope resolution operator

/*
    1) Accessing Global Variables:If you have a global variable and a local variable with the same name, 
        you can use the scope resolution operator to access the global variable.
*/

int var = 10;

/*
    2) Defining Functions Outside Class: When defining a member function of a class outside the class definition,
    you use the scope resolution operator.
*/

class Myclass {
    public:
        void myFunction();
};

void Myclass:: myFunction() {
    cout << "HELLO WORLD!  \n";
}


/*
    3)  Accessing Class Static Members: For accessing static members of a class, you use the scope resolution operator.
*/

class StaticClass {
    public:
        static int staticVariable;
};

int StaticClass::staticVariable = 10;


int main() {
    int var = 20;
    cout << ::var << "\n"; // this will get the global value
    cout << var << "\n"; // this will get the value inside the scope


    Myclass obj;
    obj.myFunction(); // access the value when the function of a class outside the class definition,by using the scope resolution


    StaticClass obj1;
    cout << obj1.staticVariable << "\n"; // access static member


    cout << StaticClass::staticVariable << "\n"; // access the static member;
}

/* scope resolution operator is used to access the variables, functions, class and other members that are not in the 
    current scope
*/
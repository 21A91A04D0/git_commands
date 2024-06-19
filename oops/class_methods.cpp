#include<bits/stdc++.h>
using namespace std;


//method inside class
class Myclass {
    public:
        void myMethod() { // method inside class
            cout << "Welcome to method inside class" << endl;
        }
};



// method outside class
class Class2 {
    public:
        void myMethod1();
};
void Class2::myMethod1() {
    cout << "Welcome to method outside class" << endl;
}



int main() {
    Myclass obj;
    obj.myMethod();

    Class2 obj2;
    obj2.myMethod1();
    return 0;
}
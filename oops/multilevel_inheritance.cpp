#include<bits/stdc++.h>
using namespace std;
class MyClass {
    public:
        void myFunction() {
            cout << "This is Multi-Level Inheritance \n";
        }
};


class MyChild : public MyClass {
    // it is Derived from MyClass
};

class MyGrandChild : public MyChild {
    // it is Derived from mychild
};
int main() {
    MyGrandChild Obj;
    Obj.myFunction();
}

/*A class can also be derived from one class, which is already derived from another class.

In the following example, MyGrandChild is derived from class MyChild (which is derived from MyClass).*/


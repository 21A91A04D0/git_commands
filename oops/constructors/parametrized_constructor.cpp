/*
    A parameterized constructor is a constructor that accepts parameters when an object is instantiated.
*/

#include<bits/stdc++.h>
using namespace std;
class ParaC {
    private:
        int var1;
        int var2;
    public:
        ParaC(int a, int b) : var1(a), var2(b) { // parametrized constructor
            cout << "parametrized contructor\n";
        }
        int get_var1() {
            return var1;
        }
        int get_var2() {
            return var2;
        }
};


int main() {
    ParaC first;
    // ParaC obj(10, 20);
    // cout << obj.get_var1() << " ";
    // cout << obj.get_var2() << "\n";
}

/*
    a constructor is a special member function that is automatically called when an object of a class is created.
    Its primary purpose is to initialize the object's data members and set up the object for use. 
    Constructors do not have return types, not even void.
*/
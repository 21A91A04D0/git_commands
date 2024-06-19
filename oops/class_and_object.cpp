#include<bits/stdc++.h>
using namespace std;
class MyClass { // class 
    public: // access specifiers
        int number; // attribute of(int variable)
        string name; // attribute of (string variable)
};
int main() {
    MyClass obj; //creating an object
    obj.number = 10;
    obj.name = "siva";
    MyClass obj1;// creating an object
    obj1.number = 20;
    obj1.name = "hello World!";

    cout << obj.number << " " << obj.name << "\n";
    cout << obj1.number << " " << obj1.name << "\n";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

struct Person {
    public:
        string name;
        int age;
};
void printDetails(Person &p) {
    cout << p.name << " ";
    cout << p.age;
}

int main() {
    Person obj;
    obj.name = "siva";
    obj.age =  10;
    printDetails(obj);
    Person obj2;
    obj2.name = "Puja";
    obj2.age = 20;
    printDetails(obj2);
    
}

/*
    In C++, structures (structs) are user-defined data types that group different types of variables 
    under a single name. They are similar to classes,
    but by default, all members of a struct are public, whereas in classes, they are private by default.
*/
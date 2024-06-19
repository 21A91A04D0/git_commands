#include<bits/stdc++.h>
using namespace std;
class MyClass {
    public:
        int number;
        string name;
};
int main() {
    MyClass obj;
    obj.number = 10;
    obj.name = "siva";
    MyClass obj1;
    obj1.number = 20;
    obj1.name = "hello World!";

    cout << obj.number << " " << obj.name << "/n";
    cout << obj1.number << " " << obj1.name << "/n";
    return 0;
}

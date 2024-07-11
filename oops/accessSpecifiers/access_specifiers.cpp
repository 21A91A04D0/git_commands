#include<bits/stdc++.h>
using namespace std;
class MyClass {
    public:
        int x;
    private:
        int y;
};


// if we not mention any access specifier then by default all members of a class are private;
// class Myclass {
//     int x;
//     int y;
// };


int main() {
    MyClass myObj;
    myObj.x = 100; // allowed(public) from outside of the class

    // myObj.y = 10; // not allowed (private) from outside of the class;

    // cout << myObj.y << endl;

    cout << myObj.x << endl;
}
#include<iostream>
using namespace std;

// forward declaration of PrivateClass
class PrivateClass;


class FriendClass {
    public:
        void access(PrivateClass &obj);
};

class PrivateClass {
    private:
        int data;

    public:
        PrivateClass(int val) : data(val) {}
        friend class FriendClass;
};



// Definition of FriendClass member function
void FriendClass::access(PrivateClass &obj) {
    cout << "Accessing private member of PrivateClass from FriendClass:"  << obj.data << "\n";
}

int main() {
    PrivateClass obj(42);

    FriendClass frdObj;

    frdObj.access(obj);

}

/*
    A friend class can access private and protected members of other classes in which it is declared as a friend. 
*/
#include <iostream>

class ClassA {
private:
    int privateVar1;
    double privateVar2;
    char privateVar3;

public:
    // Parameterized constructor
    ClassA(int val1, double val2, char val3) : privateVar1(val1), privateVar2(val2), privateVar3(val3) {
        std::cout << "Parameterized constructor called\n";
    }

    // Getter functions to access private member variables
    int getPrivateVar1() const {
        return privateVar1;
    }

    double getPrivateVar2() const {
        return privateVar2;
    }

    char getPrivateVar3() const {
        return privateVar3;
    }
};

int main() {
    // Create an object using the parameterized constructor
    ClassA objA(42, 3.14, 'A');

    // Access and print the values using getter functions
    std::cout << "privateVar1: " << objA.getPrivateVar1() << std::endl;
    std::cout << "privateVar2: " << objA.getPrivateVar2() << std::endl;
    std::cout << "privateVar3: " << objA.getPrivateVar3() << std::endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

class Employee {
    protected:
        int salary;
};

class Programmer : public Employee {
    public:
        int bonus;
        void setSalary(int s) {
            salary = s;
        }

        int getSalary() {
            return salary;
        }
};
int main() {
    Programmer obj;
    obj.bonus = 1000;
    obj.setSalary(5000);
    cout << obj.getSalary() << " " << obj.bonus << "\n";
}

/*we have only used public (members of a class are accessible from outside the class) and 
private (members can only be accessed within the class). The third specifier, protected, 
is similar to private, but it can also be accessed in the inherited class:
*/
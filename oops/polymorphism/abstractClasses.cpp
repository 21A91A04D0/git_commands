# include<iostream>
using namespace std;
    
/*program for abstract class

*/
class car
{
public:
	virtual void start()=0;
};
class innova:public car
{
public:
	void start()
	{
		cout<<"innova started"<<endl;
	}
};
class swift:public car
{
public:
	void start()
        {
		cout<<"swift started"<<endl;
	}
};
int main()
{
	// car c;
	car *p=new innova();
	p->start();
	p=new swift();
	p->start();
}

/*
If a member function is not having a body then it is an abstract
function. 
If a class is having an abstract function then class becomes
abstract.
If a class is having pure virtual function then it becomes abstract.
We can declare pointer of abstract class
We can create object of abstract class but cannot call undefined
functions.
Abstract classes are useful for achieving polymorphism.
*/
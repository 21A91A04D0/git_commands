# include<iostream>
using namespace std;
    
/*program for obtaining polymorphism

*/
class car
{
public:
	virtual void start()
	{
		cout<<"car started"<<endl;
	}
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
	car *ptr=new innova();
	ptr->start();
	ptr=new swift();
	ptr->start();
}

/*
Polymorphism
• Same name different actions
• Runtime Polymorphism is achieved using function overriding
• Virtual functions are abstract functions of base class
• Derived class must override virtual function
• Base class pointer pointing to derived class object and a override function is called
Summary: class car is defined, then sub classes override, then base class method made as
virtual the pure virtual 
*/
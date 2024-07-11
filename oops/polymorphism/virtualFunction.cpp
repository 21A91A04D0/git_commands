# include<iostream>
using namespace std;
    

class base
{
public:
	virtual void fun()
	{
		cout<<"fun of base"<<endl;
	}
};
class derived:public base
{
public:
	void fun()
	{
		cout<<"fun of derived"<<endl;
	}
};
int main()
{
	derived d;
	d.fun();
	base *ptr=&d;
	ptr->fun();
}

/*
Virtual Functions
• Virtual functions are used for achieving polymorphism
• Base class can have virtual functions
• Virtual functions can be overrides in derived class
• Pure virtual functions must be overrides by derived class
*/
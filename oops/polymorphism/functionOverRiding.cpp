# include<iostream>
using namespace std;
    
/*program for function overriding

*/
class base
{
public:
	void display()
	{
		cout<<"display of base"<<endl;
	}
};
class derived:public base
{
public:
	void display()
	{
		cout<<"display of derived"<<endl;
	}
};
int main()
{
	derived d;
	d.display();
}

/*
Function Overriding
• Redefining a function of base class in derived class
• Function overriding is used for achieving runtime polymorphism
• Prototype of a overrides function must be exactly same as base class function
*/
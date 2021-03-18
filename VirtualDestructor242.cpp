#include<iostream>
using namespace std;
    
class Base
{
    public:
	virtual ~Base()
	{
	    cout<<"Destructor of Base"<<endl;
	}
	
};
    
class Derived:public Base
{
    public:
	~Derived()
	{
		cout<<"Destructor of Derived"<<endl;
	}
    };
    
    
void fun()
{
	Base *p=new Derived();
	delete p;
}
    
int main()
{
	fun();
}
    

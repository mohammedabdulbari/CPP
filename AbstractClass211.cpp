#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void fun1()=0;
    virtual void fun2()=0;
};
    
class Derived :public Base
{
    public:
    void fun1()
    {
        cout<<"fun1 of Derived"<<endl;
    }  
                
    void fun2()
    {
        cout<<"fun2 of Derived"<<endl;
    }

};
    
int main()
{
    Derived d;
    d.fun1();
    d.fun2();

} 
    

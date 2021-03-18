#include<iostream>
using namespace std;

class Parent
{
    private: int a;
    protected: int b;    
    public: int c;

    void funParent()
    {
        a=10;
        b=5;
        c=15;
    }
    
};
    
class Child: private Parent
{
    private:
    protected:
    public:

    void funChild()
    {
        //a=10;
        b=5;
        c=15;
    } 
	     
};
    
class GrandChild : public Child
{
    public:
    void funGrandChild()
    {
        //a=10;
        //b=5;
        //c=20;
    }
    
};
    
int main()
{
    // Child c;
    //c.a=10;
    //c.b=5;
    //c.c=20;
        
}
    

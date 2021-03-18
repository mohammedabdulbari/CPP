#include<iostream>
using namespace std;
    
class Outer
{
	class Inner
    {
	public:
	void display()
	{
	cout<<"Display of Inner"<<endl;
	}
	
};

    public:
	void fun()
	{
		i.display();
	}
	                
    Inner i;
    
};
    
int main()
{
	Outer::Inner i;
}
    

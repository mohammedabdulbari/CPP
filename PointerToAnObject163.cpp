#include<iostream>
using namespace std;

class Rectangle
{
    public:
	int length;
	int breadth;
	    
	int area()
	{
		return length*breadth;
	}
	        
	int perimeter()
    {
		return 2*(length+breadth);
	}
	
};
    
int main()
{	
	Rectangle r1;
    Rectangle *ptr;
	ptr=&r1;
	ptr->length=10;
	ptr->breadth=5;
	    
	cout<<ptr->area()<<endl;
	cout<<ptr->perimeter()<<endl;  
	    
}
    

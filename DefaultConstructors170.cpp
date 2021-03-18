#include<iostream>
using namespace std;
    
class Rectangle
{
    private:
	int length;
	int breadth;
	    
    public:
	Rectangle()
	{
			
		length=1;
		breadth=1;
	}
	        
int area()
	{
		return length*breadth;
	}
	
};
    
int main()
{
	Rectangle r1;
	cout<<r1.area()<<endl;
	
	return 0;
	    
}
    

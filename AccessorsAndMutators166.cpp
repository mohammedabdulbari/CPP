#include<iostream>
using namespace std;
    
class Rectangle
{
    private:
	int length;
	int breadth;
	
    public:
	void setLength(int l)
	{
		length=l;
    }
	
	void setBreadth(int b)
	{
	    breadth=b;
	}
	
 	int getLength()
    {
	    return length;
	}
	        
	int getBreadth()
	{
		return breadth;
	}
	    
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
	r1.setLength(10);
	r1.setBreadth(5);
	    
 	cout<<r1.area()<<endl;
	cout<<r1.perimeter()<<endl;
	cout<<r1.getLength()<<endl;
	
}
    

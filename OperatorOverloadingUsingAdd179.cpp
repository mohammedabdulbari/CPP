#include<iostream>
using namespace std;
    
class Complex
{
    public:
	int real;
	int img;
	        
	Complex add(Complex c)
	{
		Complex temp;
		temp.real=real+c.real;
		temp.img=img+c.img;
		return temp;
	}
	
};
    
int main()
{
	Complex c1,c2,c3;
	c1.real=5;
	c1.img=3;
	c2.real=10;
	c2.img=5;
	c3=c1.add(c2);
	    
	cout<<c3.real<<"+i"<<c3.img<<endl;
	    
}
    

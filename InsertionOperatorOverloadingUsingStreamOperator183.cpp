#include<iostream>
using namespace std;

class Complex
{
    private:
	int real;
	int img;
	        
	public:
	Complex(int r=0,int i=0)
	{
	    real=r;
	    img=i;
	}
	void display()
	{
	    cout<<real<<"+i"<<img<<endl;
	}
	
	friend ostream & operator<<(ostream &out,Complex &c);
	
};
    
    ostream & operator<<(ostream &out,Complex &c)
    {
	    out<<c.real<<"+i"<<c.img<<endl;
	    return out;
    }
                
int main()
{
	Complex c(10,5);
	    
	cout<<c<<endl;;
	    
	operator<<(cout,c);
	    
}
    

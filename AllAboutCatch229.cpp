#include<iostream>
using namespace std;
    
class MyException1: exception
{
        
};
    
class MyException2:public MyException1
{
        
};
    
int main()
{
	try
	{
		throw MyException1();
	}
	        
	catch(MyException2 e)
	{
		cout<<"Int Catch"<<endl;
    }
        	
	catch(MyException1 e)
	{
	    cout<<"Double Catch"<<endl;
	}
	        
	catch(...)
	{
		cout<<"All Catch"<<endl;
	}
	        
}
    

#include<iostream>
using namespace std;
    
class Test
{
    public:
    int a;
    static int count;
    Test()
    {
	    a=10;
        count++;
    }
            
    static int getCount()
    {
	    return count;
    }
    
};
    
int Test::count=0;
int main()
{
	Test t1,t2;
	cout<<Test::getCount()<<endl;
	cout<<t1.getCount()<<endl;
	    
}
    

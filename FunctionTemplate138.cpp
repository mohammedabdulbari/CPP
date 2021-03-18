#include<iostream>
using namespace std;
    
template<class T>
T maxim(T a,T b)
    {
       return a>b?a:b;
    }
    
int main()
{
	cout<<maxim(12,14)<<endl;
	cout<<maxim(2.3,1.4)<<endl;
	cout<<maxim(2.3f,5.6f)<<endl;
	
	return 0;
	    
}
    
	 

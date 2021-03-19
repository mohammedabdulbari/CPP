#include<iostream>
using namespace std;
    
float fun()
{
	return 2.34f;
}
    
int main()
{
	double d=12.3f;
	int i=9;
	auto x=2*d+i;
	    
	cout<<x;
	return 0;    
}

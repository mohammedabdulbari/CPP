#include<iostream>
using namespace std;
    
void fun()
{
	static int s=10;
	s++;
	    
	cout<<s<<endl;
}
    
int main()
{
	fun();
	fun();
	    
}
    

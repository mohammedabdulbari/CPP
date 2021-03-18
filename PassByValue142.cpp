#include<iostream>
using namespace std;
    
void swap(int a,int b)
{
	cout<<a<<" "<<b<<endl;
	int temp;
	temp=a;
	a=b;
	b=temp;
	    
	cout<<a<<" "<<b<<endl;
}
    
int main()
{    
	int x=10,y=20;
	swap(x,y);
	    
	cout<<x<<" "<<y<<endl;
	
	return 0;
	    
}
    

#include<iostream>
using namespace std;

int main()
{
	int m,n;
	cout<<"Enter two Numbers";
	cin>>m>>n;
	    
	while(m!=n)
    {
	if(m>n)
	  	m=m-n;
	else if(n>m)
	  	n=n-m;
    }	
	cout<<"GCD of 2nos "<<m;
	    
	return 0;
	    
}

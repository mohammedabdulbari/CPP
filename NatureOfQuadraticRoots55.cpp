#include<iostream>
#include<cmath>
using namespace std;

int main() 			
{
	float a,b,c,d,r1,r2;
	cout<<"Enter a,b,c";
	cin>>a>>b>>c;
	d=b*b-4*a*c;

	if(d==0)
	{
		cout<<"Roots are Real and Equal"<<endl;
		cout<<(-b/(2*a));
	}
	else if(d>0)
	{
		cout<<"Roots are Real and Unequal"<<endl;
		cout<<(-b+sqrt(d)/(2*a));
		cout<<(-b-sqrt(d)/(2*a));
	}
	else
		cout<<"Imaginery";
		    	
	return 0;

}
    

#include<iostream>
using namespace std;

int main()
{
	int n,i=1,sum=0;
	cout<<"Enter the Number";
	cin>>n;
	    
	while(i<=n)
	{
	    sum=sum+i;
	    i++;
	}
	cout<<"Sum of Natural no is"<<sum<<endl;
	    
    return 0;
    	
}

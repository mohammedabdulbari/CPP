#include<iostream>
using namespace std;
    
int main()
{
	int i,n,sum=0;
	cout<<"Enter the Number";
	cin>>n;
	    
	for(i=1;i<=n;i++)
	{
	    if(n%i==0)
	    {
		    sum=sum+i;
	    }
	}
	    
    if(2*n==sum)
		cout<<"Perfect Number";
    else
		cout<<"Not a Perfect Number";	 
			    
	return 0;
	    
}

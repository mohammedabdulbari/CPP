#include<iostream>
using namespace std;
    
int main()
{
    int A[10]={6,8,13,17,20,22,25,28,30,35};
 	int l=0,h=9,key,mid;
	cout<<"Enter the Key";
	cin>>key;
	    
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==A[mid])
		{
			cout<<"Found at"<<mid;
			return 0;
		}
		else if(key<A[mid])
			h=mid-l;
		else
			l=mid+l;
	}
	    
	cout<<"Not Found";
	
	return 0;
	    
}

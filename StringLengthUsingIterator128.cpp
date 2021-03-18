#include<iostream>
using namespace std;
    
int main()
{
	string str="welcome";
	string::iterator it;
	int count=0;
	    
	for(it=str.begin();it!=str.end();it++)
	{
		count++;
	}
	cout<<"length is"<<count<<endl;
	    
	return 0;
	    
}

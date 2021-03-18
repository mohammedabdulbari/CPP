#include<iostream>
using namespace std;
    
int main()
{
	string email="john123@gmail.com";
	int i=(int)email.find('@');
	string uname=email.substr(0,i);
	    
	cout<<"User Name is "<<uname<<endl;
	
	return 0;
	    
}
    

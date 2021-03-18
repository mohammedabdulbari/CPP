#include<iostream>
using namespace std;
    
int main()
{
	string str="MADAM";
	string rev="";
	int len=(int)str.length();
	rev.resize(len);
	    
	for(int i=0,j=len-1;i<len;i++,j--)
	{
		rev[i]=str[j];
	}
	rev[len]='\0';
			
	if(str.compare(rev)==0)
		cout<<"Palindrome"<<endl;
	else
		cout<<"Not a Pallindrome"<<endl;
		    
	return 0;
	    
}

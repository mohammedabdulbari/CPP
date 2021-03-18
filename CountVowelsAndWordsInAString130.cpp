#include<iostream>
using namespace std;
    
int main()
{
	string str="How Many Words";
	int vowels=0,consonant=0,space=0;
	    
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		
		    vowels++;
		else if(str[i]==' ')
		
		    space++;
		    
		else
		    consonant++;
	}
	
	cout<<"vowels "<<vowels<<endl;
	cout<<"consonant "<<consonant<<endl;
	cout<<"words "<<space+1<<endl;
	    
	return 0;
	    
}
    

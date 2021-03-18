#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter Two Numbers: "<<endl;
    cin>>a>>b;
        
    if(b==0)
    {
        cout<<"Division By Zero"<<endl;
    }
    else
    {
        c=a/b;
        cout<<c<<endl;
    }
    
    return 0;
        
}

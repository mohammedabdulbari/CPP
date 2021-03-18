#include <iostream>
using namespace std;

int main()
{
    int roll;
    cout<<"Enter your Roll Number."<<endl;
    cin>>roll;
        
    if(roll<1)
    {
        cout<<"Invalid Roll Number."<<endl;
    }
    else
    {
        cout<<"Valid Roll Number."<<endl;
    }
            
    return 0;
        
}

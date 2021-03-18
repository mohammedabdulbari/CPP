#include <iostream>
using namespace std;

int main()
{
    int i=5,j;
    j=i++;
    cout<<j<<" "<<i<<endl;
        
    int k=5,l;
    l=++k;
    cout<<l<<" "<<k<<endl;
        
    int a=5,b;
    b=2*++a + 2*a++;
    cout<<b<<" "<<a<<endl;;
        
    int c=5,d;
    d=2*c++ + 2*c++;
    cout<<d<<" "<<c<<endl;
        
    return 0;
    
}
    

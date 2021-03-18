#include <iostream>
using namespace std;

int main()
{
    int A[5]={2,4,6,8,10};
    int *p=A,*q=&A[4];
    cout<<*p<<endl;
    cout<<endl;
        
    p++;
    cout<<*p<<endl;
    cout<<endl;
        
    p--;
    cout<<*p<<endl;
    cout<<endl;
    cout<<p<<endl;
    cout<<p+2<<endl;
    cout<<endl;
    cout<<*p<<endl;
    cout<<*(p+2)<<endl;
    cout<<endl;
    cout<<q-p<<endl;
    cout<<p-q<<endl;
    
    return 0;
        
}
    

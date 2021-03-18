#include <iostream>
using namespace std;

int sum(int a,int b,int c=0)
{
    return a+b+c;
}
    
int main()
{
    cout<<sum(10,20,3)<<endl;
    
    return 0;
        
} 


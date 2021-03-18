#include<iostream>
using namespace std;

int main()
{
    float billAmount;
    float discount=0.0;

    cout<<"Enter Bill Amount:";
    cin>>billAmount;
        
    if(billAmount>=500)
        
    	discount=billAmount*20/100;
        
    else if(billAmount>=100 && billAmount<500)
        
        discount=billAmount*10/100;
        billAmount=billAmount-discount;

    cout<<"Bill Amount is:"<<billAmount<<endl;
    cout<<"Discount is :"<<discount<<endl;
    cout<<"Discounted Amount is:"<<billAmount<<endl;
        
    return 0;
        
}

#include<iostream>
using namespace std;

class BasicCar
{
    public:
	void start()
	{
		cout<<"Car Started"<<endl;
	}
	
};
    
class AdvanceCar:public BasicCar
{
    public:
	void playmusic()
	{
		cout<<"Playing Music"<<endl;
	}
	
};
    
int main()
{
	BasicCar b;
	AdvanceCar *q=&b;
	AdvanceCar a;
	a.start();
	a.playmusic();
	BasicCar *ptr=&a;
	ptr->start();
	ptr->playmusic(); // this function cannot be called.
	    
}
    

#include "RedheadDuck.h"
#include "Quack.h"
#include "MuteQuack.h"

RedheadDuck::RedheadDuck() 
{
	flyBehavior = new flyWithWings();
	quackBehavior = new MuteQuack();
}

void RedheadDuck::display() {
	cout << "I am RedheadDuck" << endl;
}

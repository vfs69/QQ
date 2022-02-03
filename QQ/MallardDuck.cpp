#include "MallardDuck.h"
#include "Quack.h"
MallardDuck::MallardDuck()
{
	flyBehavior = new flyWithWings();
	quackBehavior = new Quack();
}

void MallardDuck::display() {
	cout << "I am MallardDuck" << endl;
}
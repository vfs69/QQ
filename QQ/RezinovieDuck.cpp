#include "RezinovieDuck.h"
#include "Quack.h"
#include "SQueack.h"

RezinovieDuck::RezinovieDuck() {
	flyBehavior = new flyWithWings();
	quackBehavior = new SQueack();
}

void RezinovieDuck::display()
{
	cout << "I am RezinovayaDuck" << endl;
}

void RezinovieDuck::quack() {
	cout << "<Silence>" << endl;
}


void RezinovieDuck::swim() {
	cout << "<plux>" << endl;
}


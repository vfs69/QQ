#pragma once
#include <iostream>
#include "flyBehavior.h"
#include "flyWithWings.h"
#include "flyWithWings.h"
#include "QuackBehavior.h"


using namespace std;

class Duck
{
protected:
	flyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;

public:
	Duck();
	void quack();
	void swim();
	void performfly();
	void performquack();
	virtual void display() = 0;

};


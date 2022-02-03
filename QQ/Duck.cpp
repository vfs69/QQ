#include "Duck.h"

Duck::Duck()
{

}

void Duck::quack() {
    cout << "Kry-krya govorit utochka" << endl;
}

void Duck::swim() {
    cout << "float" << endl;
}

void Duck::performfly() {
    flyBehavior->fly();
}

void Duck::performquack() {
    quackBehavior->quack();
}

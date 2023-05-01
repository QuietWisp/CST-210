#include "Chicken.h"
#include "Animal.h"

Chicken::Chicken() : Animal("", 0) {}

Chicken::Chicken(string n, int w) : Animal(n, w) {}

void Chicken::gainWeight() {
	setWeight(getWeight() + 1);
	cout << getName() << " now weighs: " << getWeight() << "lbs" << endl;
}

void Chicken::eat() {
	setWeight(getWeight() + 1);
	cout << getName() << " is eating." << endl;
	cout << getName() << " gained 1lbs" << endl;
	cout << getName() << " now weighs: " << getWeight() << "lbs";
	cout << " " << endl;
}

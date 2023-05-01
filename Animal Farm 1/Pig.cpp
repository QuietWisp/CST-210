#include "Pig.h"
#include "Animal.h"

Pig::Pig() : Animal("", 0) 
{

}

Pig::Pig(string n, int w) : Animal(n, w) 
{

}

void Pig::gainWeight() {
	setWeight(getWeight() + 5);
	cout << getName() << " now weighs: " << getWeight() << " lbs" << endl;
}

void Pig::eat() {
	setWeight(getWeight() + 5);
	cout << getName() << " is eating." << endl;
	cout << getName() << " gained 5lbs" << endl;
	cout << getName() << " now weighs: " << getWeight() << "lbs";
	cout << " " << endl;
}

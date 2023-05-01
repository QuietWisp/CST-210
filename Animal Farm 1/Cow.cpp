#include "Animal.h"
#include "Cow.h"

Cow::Cow() : Animal("", 0)
{

}

Cow::Cow(string n, int w) : Animal(n, w)
{

}

void Cow::gainWeight()
{
	setWeight(getWeight() + 12);
}

void Cow::eat()
{
	setWeight(getWeight() + 12);
	cout << getName() << " is eating." << endl;
	cout << getName() << " gained 12lbs" << endl;
	cout << getName() << " now weighs: " << getWeight() << "lbs";
	cout << " " << endl;
}

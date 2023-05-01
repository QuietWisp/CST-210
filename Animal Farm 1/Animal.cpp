#include "Animal.h"

Animal::Animal()
{
	name = " ";
	weight = 0;
}

Animal::Animal(string n, int w)
{
	name = n;
	weight = w;
}

string Animal::getName() const
{
	return name;
}

int Animal::getWeight() const
{
	return weight;
}

void Animal::setName(string n)
{
	name = n;
}

void Animal::setWeight(int w)
{
	weight = w;
}

void Animal::eat()
{
	cout << name << " is eatting." << endl;
}

void Animal::gainWeight()
{
	weight++;
}

#include <iostream>
#include "Die.h"
using namespace std;

Dice::Dice()
{
	value = 0;
	sides = 6;
}

int Dice::getValue()
{
	return value;
}

int Dice::Die()
{
	value = rand() % sides + 1;
	return value;
}

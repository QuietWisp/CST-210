#pragma once
#include <iostream>
#include <vector>
#include "Animal.h"
#include "Pig.h"
#include "Chicken.h"
#include "Cow.h"
using namespace std;

class Barn
{
private:
	vector<Chicken> coop;
	vector<Pig> pigPen;
	vector<Cow> cowPen;

public:
	Barn();
	void feedChickens();
	void feedPigs();
	void feedCows();
};

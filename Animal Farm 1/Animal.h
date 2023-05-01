#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
	string name;
	int weight;

public:
	Animal();
	Animal(string n, int w);
	string getName() const;
	int getWeight() const;

	void setName(string);
	void setWeight(int);
	void eat();
	void gainWeight();
};

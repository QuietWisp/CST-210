#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pig : public Animal {
public:
	Pig();
	Pig(string n, int w);
	void eat();
	void gainWeight();
};

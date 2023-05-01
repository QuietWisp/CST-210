#pragma once
#include <iostream>
#include <string>
using namespace std;

class Cow : public Animal {
public:
	Cow();
	Cow(string n, int a);
	void eat();
	void gainWeight();
};

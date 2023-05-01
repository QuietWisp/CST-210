#pragma once
#include <iostream>
#include <string>
using namespace std;

class Chicken : public Animal 
{
public:
	Chicken();
	Chicken(string n, int w);
	void eat();
	void gainWeight();
};

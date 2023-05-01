#pragma once
#include <iostream>
using namespace std;

class Dice
{
private:
	int sides;
	int value;

public: 
	Dice();
	int Die();
	void roll();
	int getValue();
	int showTotal;
};

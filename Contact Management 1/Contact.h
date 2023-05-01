#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Contact
{
private:
	string name, address, state, zip, phone, temp;

public:
	Contact();
	Contact(string name, string address, string state, string zip, string phone);
	Contact(const Contact& copy);
	void writeContact();
	void readContact();

	friend ostream& operator << (ostream& out, const Contact& c);
	friend istream& operator >> (istream& in, Contact& c);
};

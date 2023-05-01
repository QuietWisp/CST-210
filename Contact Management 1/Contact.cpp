#include <iostream>
#include <fstream>
#include <string>
#include "Contact.h"
static fstream myFile;
using namespace std;

Contact::Contact()
{
	name = address = state = zip = phone = temp = " ";
}

Contact::Contact(string nm, string add, string st, string zp, string phn)
{
	name = nm;
	address = add;
	state = st;
	zip = zp;
	phone = phn;
	myFile.open("myContacts.txt", ios::app);
	myFile << name << " " << address << " " << state << " " << zip << " " << phone << endl;
	myFile.close();
}

Contact::Contact(const Contact& copy) //Copy constructor 
{
	name = copy.name;
	address = copy.address;
	state = copy.state;
	zip = copy.zip;
	phone = copy.phone;
	myFile.open("myContacts.txt", ios::app);
	myFile << name << " " << address << " " << state << " " << zip << " " << phone << endl;
	myFile.close();
}

void Contact::writeContact() //Prompts user for contact information
{
	cout << endl << " Enter your last name, first name in this format: ";
	getline(cin, name);

	cout << " Enter your address: ";
	getline(cin, address);

	cout << " Enter your state: ";
	getline(cin, state);

	cout << " Enter your zipcode: ";
	getline(cin, zip);

	cout << " Enter your phone number using brackets for the area code and dashes: ";
	getline(cin, phone);

	myFile.open("myContacts.txt", ios::app);
	myFile << name << endl << address << endl << state << " " << zip << endl << phone << endl;
	myFile.close();
}

void Contact::readContact() //Stores answers into temp
{
	myFile.open("myContacts.txt");
	while (getline(myFile, temp))
	{
		cout << temp << endl;
	}
	myFile.close();
}

ostream& operator << (ostream& out, const Contact& c)
{
	string temp;
	myFile.open("myContacts.txt");
	while (getline(myFile, temp))
	{
		out << temp << endl;
		return out;
	}
	myFile.close();
	return out;
}

istream& operator >> (istream& in, Contact& c)
{
	cout << endl << " Enter your last name, first name in this format: ";
	getline(in, c.name);
	myFile << c.name << endl;

	cout << endl << " Enter your address: ";
	getline(in, c.address);
	myFile << c.address << endl;

	cout << endl << " Enter your state: ";
	getline(in, c.state);
	myFile << c.state << endl;

	cout << endl << " Enter your zipcode: ";
	getline(in, c.zip);
	myFile << c.zip << endl;

	cout << endl << " Enter your phone number using brackets for the area code: ";
	getline(in, c.phone);
	myFile << c.phone << endl;

	myFile.open("myContacts.txt", ios::app);
	myFile.close();
	return in;
}

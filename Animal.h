// Libraries and other compiler directives
#pragma once
#include <string>

// namespace declaration
using namespace std;

class Animal
{
private:
	string name;

public:
	Animal();
	Animal(string animalName);
	virtual ~Animal();
	virtual const string getAnimalType() = 0;
	virtual void makeNoise() = 0;
	const string getName();
	void setName(string n);
};

// Libraries and other compiler directives
#pragma once
#include "Animal.h"
#include<string>

// namespace declaration
using namespace std;

class Cat : public Animal
{
public:
	Cat();
	Cat(string animalName);
	virtual const string getAnimalType();	//pure virtual
	virtual void makeNoise();	//pure virtual
	void doKittyThings();

};

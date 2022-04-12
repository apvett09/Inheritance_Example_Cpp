
// Libraries and other compiler directives
#include<iostream>
#include<string>
#include "Animal.h"

// namespace declaration
using namespace std;

// Precondition: Derived class object has been created and with uninitalized name
// Postcondition: Assigns derived class objects name to ????
Animal::Animal() {
	name = "????";
}

// Precondition: Derived class object has been created and with initalized name
// Postcondition: assigns initialized name to name
Animal::Animal(string animalName) {
	name = animalName;
}

// Precondition: Constructor has been called for derived class object
// Postcondition: Derived class object destroyed
Animal::~Animal() {
}

// Precondition: name must be assigned
// Postcondition: name is returned
const string Animal::getName() {
	return name;
}

// Precondition: n is assigned to an argument that is a string
// Postcondition: name is assigned to string n
void Animal::setName(string n) {
	name = n;
}
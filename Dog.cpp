// Libraries and other compiler directives
#include <iostream>
#include<string>
#include "Dog.h"

// namespace declaration
using namespace std;

// Precondition: Dog object has been create with initialized name
// Postcondition: animalName is passed to abstract class and is assigned to name
Dog::Dog(string animalName)
	: Animal(animalName) {
}

// Precondition: Dog object has been created with uninitialized name
// Postcondition: defaults to the abstract class's no arguments constructor
Dog::Dog()
	: Animal{} {
}

// Precondition: Dog object has been created
// Postcondition: outputs cat action to the console
void Dog::doDoggyThings() {
	cout << "I'm digging a hole and burying my bone so the squirrels can’t get it!" << endl;
}

// Precondition: Dog object has been created
// Postcondition: outputs cat sounds to the console
void Dog::makeNoise() {
	cout << "Woof! Woof! Squirrel!" << endl;
}

// Precondition: Dog object has been created
// Postcondition: returns "Dog" string
const string Dog::getAnimalType() {
	return "Dog";
}
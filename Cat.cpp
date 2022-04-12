// Libraries and other compiler directives
#include <iostream>
#include<string>
#include "Cat.h"

// namespace declaration
using namespace std;


// Precondition: Cat object has been create with initialized name
// Postcondition: animalName is passed to abstract class and is assigned to name
Cat::Cat(string animalName)
	: Animal(animalName) {
}

// Precondition: Cat object has been created with uninitialized name
// Postcondition: defaults to the abstract class's no arguments constructor
Cat::Cat()
	: Animal{} {
}

// Precondition: Cat object has been created
// Postcondition: outputs cat action to the console
void Cat::doKittyThings() {
	cout << "I'm tearing up your couch with my claws, and leaving dead mice on your pillow!" << endl;
}

// Precondition: Cat object has been created
// Postcondition: outputs cat sounds to the console
void Cat::makeNoise() {
	cout << "Meeeooow! Feed me! Purr, Purr, Purr." << endl;
}

// Precondition: Cat object has been created
// Postcondition: returns "Cat" string
const string Cat::getAnimalType() {
	return "Cat";
}
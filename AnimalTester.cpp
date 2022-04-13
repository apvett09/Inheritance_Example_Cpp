// Libraries and other compiler directives
#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

// namespace declaration
using namespace std;

// Precondition: None
// Postcondition: outputs to the console cat/dog names, types, actions and sounds
// Description: Main function
int main() {
	cout << "-------Test for Cat Class-------" << endl;
	// get the cats name
	Animal* c{ nullptr };
	Cat cat1;
	c = &cat1;
	c->setName("Lewis");
	cout << c->getName() << endl;

	// get the type of animal
	cout << c->getAnimalType() << endl;

	// make noise
	c->makeNoise();

	// do kitty things
	cat1.doKittyThings();
	cout << endl;

	cout << "-------Test for Dog Class-------" << endl;
	// get the dogs name
	Animal* d{ nullptr };
	Dog dog1;
	d = &dog1;
	d->setName("Mila");
	cout << d->getName() << endl;

	// get the type of animal
	cout << d->getAnimalType() << endl;

	// make noise
	d->makeNoise();

	// do doggy things
	dog1.doDoggyThings();
	cout << endl;

	return 0;
}

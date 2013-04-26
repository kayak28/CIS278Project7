//Dog.cpp
#include "Dog.h"

Dog::Dog(string newName):public Animal(newName)
{
	//since dog's parameter is duplicated with 
	//parameter of Animal's constructor, so 
	//Nothing to do
}
void Dog::displayType(ostream& out)
{
	out << "this is a dog" << "\n";
}
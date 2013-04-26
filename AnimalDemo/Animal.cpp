//Animal.cpp
#include "Animal.h"

Animal::Animal()
{
	name = "unknown";
}
Animal::Animal(string newName)
{
	name = newName;
}
/**
 * [Animal::setName set a new animal name]
 * @param newName [set a new name]
 */
void Animal::setName(string newName)
{
	name = newName;
}
/**
 * [Animal::getName return name]
 * @return [animal's name]
 */
string Animal::getName()
{
	return name;
}
/**
 * [Animal::displayName show up animal name(virtual function)]
 * @param out [out stores informatino that is displaied]
 */
void Animal::displayName(ostream& out)
{
	out << "Animal's name is " << name << "\n"; 
}
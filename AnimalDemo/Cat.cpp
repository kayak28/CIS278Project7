//Cat.cpp
#include "Cat.h"
Cat::Cat(string nawName, int theSize):Animal(newName)
{
	//activate super constructor by syntax of :Animal(newName)
	//setName(newName); 
	size = theSize;
}
int Cat::getSize()
{
	return size;
}
void Cat::displayName(ostream& out)
{
	out << "name is " << getName() << "\n";//get name is implimented in super
	out << "size is " << size << "\n";
}
void Cat::displayType(ostream& out)
{
	out << "Type is " << "cat";
}


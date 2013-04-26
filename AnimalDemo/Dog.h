//Dog.h

#include "Animal.h"

class Dog : public Animal
{
	public: 
		Dog(string nawName);
		void displayName(ostream& out);//virtual function
		void displayType(ostream& out);//pure virtual finction

}
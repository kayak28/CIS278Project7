//Cat.h
#include "Animal.h"

class Cat : public Animal
{	
	private:
		int size;
	public:
		Cat(string newName, int theSize);
		int getSize();
		void displayName(ostream& out);//here overload virtual function
		void displayType(ostream& out);//here overload PURE virtual function

};
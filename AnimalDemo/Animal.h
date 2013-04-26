//Animal.h

#include <iostream>
using namespace std;

#ifndef ANIMALCLS 
#define ANIMALCLS 

class Animal
{
	private:
		string name;
		string type;
	public:
		Animal();
		Animal(string name);
		void setName(string newName);
		string getName();
		virtual void displayName(ostream& out);//virtual function 
		virtual void displayType(ostream& out);//PURE virtualfunction
		

};
#endif
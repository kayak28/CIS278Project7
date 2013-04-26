//main.cpp
#include "Cat.h"
#include "Dog.h"
#include <iostream>

using namespace std;

int main()
{
	//Animal aobj("fred");
	Cat cat("Tama", 10);
	Dog dog("Ruby");

	//Nomal way to activate a function in super class
	//aobj.displayName(cout)
	//cout << endl;
	
	//{CAT ver}
	cat.displayName(cout);
	//above means  cat.Animal::displayName(cout); 
	//therefore, activate a function in super class
	cat.displayType(cout);//activate a function in child
	cout << endl; 

	dog.displayName(cout);
	dog.displayType(cout);



}
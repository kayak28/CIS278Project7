#include "LandItem.h"
#include <iostream>

using namespace std;

class DVD: public LandItem
{
	public:
		DVD();
		DVD(string titl,string rating, char stype);
		void setRating(string rate = "PG");
		void setScreen(char type);
		string getRating()const;
		char getScreenType()const;
		void printAll(ostream& );
	private: 
		string rating;
		char screenType;

};
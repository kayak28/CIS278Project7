#include "DVD.h"
#include <iostream>
using namespace std;

DVD::DVD()
{
	rating = " ";
	screenType = ' ';
}
DVD::DVD(string titl,string rate, char stype)
{
	setTitle(titl);
	setRating(rate);
	setScreen(stype);
}
void DVD::setRating(string rate)
{
	rating 	= rate;
}
string DVD::getRating()
{
	return rating;
}
void DVD::setScreen(char stype)
{
	screenType = stype;
}
char DVD::getScreen()
{
	return screenType;
}
void DVD::printAll(ostream& )
{
	
}

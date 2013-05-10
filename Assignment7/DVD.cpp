#include "DVD.h"
#include <iostream>
//#include "LandItem"
using namespace std;

DVD::DVD()
{
	rating = " ";
	screenType = ' ';
}
DVD::DVD(string titl,string rate, char stype) : LandItem(titl, 'D')
{
	//setTitle(titl);
	setRating(rate);
	setScreen(stype);
}
void DVD::setRating(string rate)
{
	rating 	= rate;
}
string DVD::getRating() const
{
	return rating;
}
void DVD::setScreen(char stype)
{
	screenType = stype;
}
char DVD::getScreenType() const
{
	return screenType;
}
void DVD::printAll(ostream& )
{
	
}

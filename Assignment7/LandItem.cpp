//LandItem.cpp
#include "LandItem.h"
LandItem::LandItem()
{
	title = " ";
	mediumType = ' ';
	borrowed = false;
	borrowNumber = 0;
}
LandItem::LandItem(string theTitle, char med)
{
	title = theTitle;
	mediumType = med;
	borrowed = false;
	borrowNumber = 0;
}

void LandItem::setTitle(string manu)
{
	title = manu;
}
void LandItem::setMedium(char med)
{
	mediumType = med;
}
void LandItem::setBNumber(int bNumber)
{
	borrowNumber = bNumber;
}
void LandItem::setBorrowed(bool bstatus)
{
	borrowed = bstatus;
}

string LandItem::getTitle() const 
{
	return title;
}
char LandItem::getMedium()const 
{
	return mediumType;
}
bool LandItem::getBorrowed() const
{
	return borrowed;
}
int LandItem::getBNumber() const
{
	return borrowNumber;
}
/*
void LandItem::printAll(ostream& )
{
	//no deff here
}
*/
ostream& operator<<(ostream& out, const LandItem& obj)
{
	out << "Title: " << obj.getTitle() << "\n"
		<< "Avairable " << obj.getBorrowed();
	if(obj.getBorrowed() == true)
	{
		out << "Borrower: " << obj.getBNumber();
	}
	return out; 
}

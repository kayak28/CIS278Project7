//video.cpp
#include <Video.h>

void Video::setQuantity(int howmany)
{
	quantity = howmany;
}
string Video::getTitle()const
{
	return title;
}
int VIdeo::getQuantity()const
{
	return quantity;
}
void Video::setTitle(string name)
{
	title = name;
}
void Video::printDetails(ostream& out)
{
	out << "Title " << getTitle() << "Quantity " << getQuantity();
}
double Video::cost()
{
	return 5.00;
}
double Video::mondayCost()
{
	return cost() * 0.5;
}
#include"DVDVideo.h"

void DVDVideo::setScreen(char ch)
{
	screen = ch;
}
char DVDVideo::getScreen()
{
	return screen;
}
void DVDVideo::printDetails(ostream& out)
{
	out << "title " << getTitle() << "Quantity " << getQuantity();
	out << "screen size " << screen << "\n";
}
double DVDVideo::cost()
{
	double cst = Video::cost();
	if(screen == 'W')
	{
		return 2 * cst;
	}
	else
	{
		return 3 * cst;
	}
}
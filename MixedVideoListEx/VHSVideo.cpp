#include "VHSVideo.h"
/**
 * [VHSVideo::setUsed set info about used or not]
 * @param val [whether or not val is used.]
 */
void VHSVideo::setUsed(bool val)
{
	used = val;
}
/**
 * [VHSVideo::getUsed  get if the video is used or not]
 * @return [bool used or not]
 */
bool VHSVideo::getUsed()
{
	return used;
}
/**
 * [VHSVideo::printDtails show up all data]
 * @param out [ostream out holding data]
 */
void VHSVideo::printDtails(ostream& out)
{
	out << "Quantity " << getQuantity() << "title " << getTitle() << "Used " << used << "\n";	
}
/**
 * [VHSVideo::cost calculate the cost depending on whether or not video is used]
 * @return [cost val]
 */
double VHSVideo::cost()
{
	double baseCost = Video::cost();//activate cost() in super class
	if(! used)
	{
		return baseCost;
	}
	else
	{
		return baseCost - (0.25 * baseCost);
	}
}
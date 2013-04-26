#include "Video.h"

class DVDVideo: public Video
{
	private: 
		char screen;//'W' or 'F'
	public: 
		DVDVideo(){//nothing to do}
		DVDVideo(String name, int num, char sc)
		{
			setTitle(name);
			setQuantity(num);
			screen = sc;
		}
		void setScreen(char );
		char getScreen();

		void printDetails(ostream& out);
		double cost();
}
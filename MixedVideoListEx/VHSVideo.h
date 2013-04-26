#include "Video.h"

class VHSVideo: public Video
{
	private: 
		bool used;
	public: 
		VHDVideo(): Video()
		{}
		VHDVideo(string name, int number, bool use):Video(name, number), used(use)
		{}

		void setUsed(bool val);
		bool getUsed();

		void printDetails(ostream& out) const;
		double cost();

}
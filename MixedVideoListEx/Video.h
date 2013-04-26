#include<string>
#include<iostream>

using namespace std;

#ifndef VID_CODE
#define VID_CODE;

class Video
{
	private:
		string title;
		int quantity;
	public: 
		Video()
		{
			title = "";
			quantity = 0;
		}
		Video(string name, int howmany)
		{
			title = name;
			quantity = howmany;
		}
		void setTitle(string name);
		void setQuantity(int howmany);
		string getTitle()const;
		int getQuantity()const;

		virtual void printDetails(ostream& );
		virtual double cost();
		double mondayCost();
};
#endif
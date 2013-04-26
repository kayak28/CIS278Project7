//LandItem

#include <iostream>
using namespace std;
//abstruct class
class LandItem
{
	public:
		LandItem();
		LandItem(string title, char med);
		void setTitle(string manu);
		void setMedium(char med);
		void setBNumber(int bNumber);
		void setBorrowed(bool bstatus);

		bool getBorrowed() const;
		string getTitle() const;
		char getMedium() const;
		int getBNumber() const;

		virtual void printAll(ostream& out) =0;//=0 means pure vartual function
		//if a class has at least one pure vartual function, the class is absturct class.
		//if only "vartual", we can define and impliment it to reuse.


		friend ostream& operator<<(ostream& out, const LandItem& obj);



	/* data */
	private: 
		string title;
		char mediumType;
		bool borrowed;
		int borrowNumber;
};

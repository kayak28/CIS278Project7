//Collection.cpp
#include <iostream>
#include "Book.h"
#include "DVD.h"
#include "cstring"
using namespace std;
/*
	class Collection
	{
		private:
			LandItem* collection;
			int capacity;
			int items;
		public:
			bool isFull();
			bool isEmpty();
			void ensurecapacity();
			void setCapacity();
			int getCapacity();
			

	}
 */

void Collection::setCapacity(int cap)
{
	capacity = cap;	
}
int Collection::getCapacity()
{
	return capacity;
}
bool Collection::isFull();
{
	return (items == size);
}

void ensureCapacity()
{
	*LandItem temp = new LandItem[size * 2];
	for(int i = 0; i < items; i++)
	{
		temp[i] = collection[i];
	}
	delete [] collection;
	collection = temp;
	capacity = capacity * 2;
}
bool compareTitle(string &userTitle)
{
	for(int i = 0; i < capacity; i++)
	{
		if( strcomp( collection[i].getTitle(), &userTitle) == 0) 
		{//Library facilities used: cstring
			return true;
		} 
	}
	return false;
}
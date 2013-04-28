//Application.cpp
#include <iostream>
#include "Book.h"
#include "DVD.h"
using namespace std;
void ensureCapacity(int minimamCapacity);

int main()
{
	const int capacity = 10;
	int items = 0;
	LandItem* collection = new LandItem[10];
	/*
		in order to put both classes Book and DVD,
	 need to declare super class with pointer and stock &instance of book and &instance of DVD
	 because children class usulally have more functions and variables than super class does
	 So, it declaring with LandItem collection, it might not be enough storage to store children's inxtance
	 However, with declaring super class with pointer and storing &instance(instance of reference),
	 then we can see information that children classes hold though these reference.  
	 */
	int action = 0;
	int choice = 0;

	do
	{
		switch(action)
		{
			case 1:
				//make a new book instance
				string title, authourName;
				char cover
				cout << "\nEnter title: ";
				cin >> title;
				cout << "\nEnter authour: ";
				cin >> authourName;
				cout << "\nEnter cover type (if soft, type S; otherwise, type H)";
				cin >> cover;
				Book book(title, authourName, cover);
				if(items = capacity)
				{//if array collection is full
					LandItem* temp = new[ capacity * 2];
					for(int i = 0; int < items; i++)
					{
						temp[i] = collection[i];
					}
					delete [] collection;
					collection = temp;
					capacity = capacity * 2;
				}
				collection[items] = &book;
				items++;
				break;


			case 2:
				//make a new DVD instance
				string title, rating;
				char stype;
				cout << "\nEnter title: ";
				cin >> title;
				cout << "\nEnter rating: ";
				cin >> rating;
				cout << "\nEnter cover type (W or H)";
				cin >> stype;
				DVD aDVD(title, rating, stype);
				if(items = capacity)
				{//if array collection is full
					LandItem* temp = new[ capacity * 2];
					for(int i = 0; int < items; i++)
					{
						temp[i] = collection[i];
					}
					delete [] collection;
					collection = temp;
					capacity = capacity * 2;
				}
				collection[items] = &aDVD;
				items++;
				break;
			case 3:
				//borrow a book/DVD
				string borrowedItem;
				cout << "Type a title you want to borrow";
				cin >> borrowedItem;
				for(int i = 0; i < capacity; i++)
				{
					if(strcom( collection[i].getTile(), &borrowedItem) == 0);
					{//both are the same
						if(collection[i].setBorrowed() != false)
						{
							collection[i].setBorrowed(false);
						}
						else
						{
							cout << "the item is already borrowed";
						}
					}
				}
			case 4:
				//
				

		}//switch 
	}while(action !=  )


	







	return 0;
}

enterNewBook(string title, )

void ensureCapacity(int minimamCapacity, LandItem collection[], int SIZE)
{
	int[] biggerCollection;

	if(SIZE < minimamCapacity)
	{
		biggerCollection = new int [minimamCapacity];
		for(int i = 0; i < SIZE; i++)
		{
			biggerCollection[i] = collection[i];
		}
		collection = biggerCollection;
	}
}

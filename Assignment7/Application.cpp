//Application.cpp
#include <iostream>
#include "Book.h"
#include "DVD.h"
using namespace std;
void ensureCapacity(int minimamCapacity);

int main()
{

	Book* books = new [10];
	DVD* dvds = new [10];




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

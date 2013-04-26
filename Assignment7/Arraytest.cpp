//Arraytest.cpp

#include <iosteam>
using namespace std;

void ensureCapacity(int collection[], int SIZE);

int main()
{
	int SIZE = 3;
	int collection[3];
	collection[0] = 1;
	collection[1] = 2;
	collection[2] = 3;

	cout << "size = " << SIZE << "\n"; 

	ensureCapacity(collection[], SIZE);
	
	cout <<"enusred length = " <<   SIZE << "\n";

	for(int index = 0; index < SIZE; index++)
	{
		cout << "collection = "<< collection[index] << "\n";
	}


	return 0;
}

void ensureCapacity(int collection[], int &SIZE)
{
	int newLength = SIZE * 2;
	int biggerArray[] = new int [newLength];
	for(int n = 0; n < newLength; n++)
	{
		biggerArray[n] = 0;
	}

	for(int i = 0; i < SIZE; i++)
	{
		biggerArray[i] = collection[i];
	}
	collection = biggerArray;
	SIZE = SIZE * 2;
}
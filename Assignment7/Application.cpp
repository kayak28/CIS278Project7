//Application.cpp
#include <iostream>
#include "Book.h"
#include "DVD.h"
using namespace std;


int main()
{
	int bookCapacity = 10;
	int dvdCapacity = 10;
	int bookitems = 0;
	int dvditems = 0;
	Book* books = new Book[bookCapacity];
	DVD* dvds = new DVD[dvdCapacity]; 
	/*
		in order to put both classes books and DVD,
	 need to declare super class with pointer and stock &instance of books and &instance of DVD
	 because children class usulally have more functions and variables than super class does
	 So, it declaring with LandItem collection, it might not be enough storage to store children's inxtance
	 However, with declaring super class with pointer and storing &instance(instance of reference),
	 then we can see information that children classes hold though these reference.  
	 */
	int action = 0;
	int choice = 0;

	do
	{
		cout << "What do you want to??\n";
		cout << "1:Add one book\n"
			 << "2:Add one DVD\n"
			 << "3:Borrow a book or DVD\n"
			 << "4:Show a book information\n"
			 << "5:Show a DVD information\n"
			 << "6:Check avaialblity\n"
			 << "7:Search a book or a DVD by title\n"
			 << "8:Search a book by authour name\n"
			 << "9:Show all information\n"
			 << "10:Goood bye\n";
		cin >> action;
		cin.ignore(50, '\n');
		if(action == 1)
		{
				//make a new books instance
				string title;
				string authourName ;
				int coverType = 0;
				char cover = 'S';
				cout << "\nEnter title: ";
				//cin.ignore(numeric_limits < streamsize > cin::max(), '\n'); 
				getline(cin,title);
				cout << "\nEnter authour: ";
				getline(cin,authourName);
				cout << "\nIs the books soft cover? Yes = 0, No = 1";
				cin >> coverType;
				if(coverType == 0)
				{//yes
					cover = 'S';
				}
				else if(coverType == 1)
				{
					cover = 'H';
				}
				else
				{
					cout << "invalid number.\n";
				}
				Book book(title, authourName, cover);
				if(bookitems == bookCapacity)
				{//if array collection is full
					Book* temp = new Book [ bookCapacity * 2];
					for(int i = 0; i < bookitems; i++)
					{
						temp[i] = books[i];
					}
					delete [] books;
					books = temp;
					bookCapacity = bookCapacity * 2;
				}
				books[bookitems] = book;
				bookitems++;
			
		} //action == 1 
		else if(action == 2)
		{
				//make a new DVD instance
				char stype;
				string title;
				string rating;
				int answer = 0;
				cout << "\nEnter title: ";
				getline(cin, title);
				cout << "\nEnter rating: ";
				getline(cin, rating);
				cout << "\nIs the DVD W-type? Yes = 0, No = 1";
				cin >> answer;
				cin.ignore(50, '\n');
				if (answer == 0)
				{
					stype = 'W';
				}
				else if(answer == 1)
				{
					stype = 'F';
				}
				else
				{
					cout << "invalid";
				}
				DVD aDVD(title, rating, stype);
				if(dvditems == dvdCapacity)
				{//if array collection is full
					DVD* temp = new DVD [dvdCapacity * 2];
					for(int i = 0; i < dvditems; i++)
					{
						temp[i] = dvds[i];
					}
					delete [] dvds;
					dvds = temp;
					dvdCapacity = dvdCapacity* 2;
				}
				dvds[dvditems] = aDVD;
				dvditems++;
				

		}
		else if (action == 3)
		{//borrow a book or DVD
			int borrow = 0;
			bool thereIs = false;
			cout << "Enter 1 to borrow a DVD\n";
			cout <<"Enter 2 to borrow a book\n";
			cin >> borrow; 
			cin.ignore(50, '\n');
			cout << "\n";

			if(borrow == 1)
			{
				string serchedTitle; 
				cout << "Enter movies title\n";
				//cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
				getline(cin, serchedTitle);
				int i;
				int id = 0;
				for(i = 0; i < dvdCapacity; i++)
				{
					if(dvds[i].getTitle() == serchedTitle)
					{
						cout << "in if statement" ;
						thereIs = true;
						//cout << dvds[i]->getTitle << "does not exisist.";
					}
				}
				if(thereIs)
				{
					if(dvds[i].getBorrowed())
					{//true = avaiable
						cout << "Enter your ID number\n";
						cin >> id;
						cin.ignore(50, '\n');
						dvds[i].setBorrowed(false);
						dvds[i].setBNumber(id);
						cout << "have a fun with your dvd!\n";
	 				}
				}
			}
			else if(borrow == 2)
			{//borrow a book 
				string borrowedBook;
				cout << "Enter book title\n";
				//cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
				getline(cin, borrowedBook);
				int index;
				int id = 0;
				bool thereIs = false;
				for(index = 0; index < bookCapacity; index++)
				{
					if(books[index].getTitle() == borrowedBook)
					{
						cout << "find the book!!";
						thereIs = true;
					}
				}
				if(thereIs)
				{
					if(books[index].getBorrowed())
					{//ture = avaialbe
						cout << "Enter your ID number\n";
						cin >> id;
						cin.ignore(50, '\n');
						books[index].setBorrowed(false);
						books[index].setBNumber(id);
						cout << "hava fun with your book!!\n";

					}
				}//if(thereIs)
			}
		}
		else if(action == 4)
		{//show book info
			cout << "\n----Books-----\n";
			for(int n = 0; n < bookCapacity; n++)
			{
				books[n].printAll(cout);
				cout << "\n";
			}
			cout <<"\n";
		}
		else if(action == 5)
		{//show DVD info
			cout << "\n----DVD----\n";
			for(int n = 0; n < dvdCapacity; n++)
			{
				dvds[n].printAll(cout);
				cout << "\n" << "\n";
			}
			cout << "\n";
		}
		else if(action == 6)
		{//search 
			int choice = 0;
			string movieTitle;
			cout << "Type 1 to search movies\n";
			cout << "Type 2 to search books\n";
			cin >> choice;
			cin.ignore(50, '\n');
			if(choice == 1)
			{//looking for movies
				cout << "Enter title of dvd that you are looking for?\n";
				getline(cin, movieTitle);
				int count;
				for(count = 0; count < dvdCapacity; count++)
				{
					if(dvds[count].getTitle() == movieTitle)
					{
						cout << "Marina Cafe have the movie\n";
						if(dvds[count].getBorrowed())
						{//dvd is able to rent 
							cout << "The dvd is avaialble now\n";
						}
						else
						{
							cout << "currently borrowed\n";
							cout << dvds[count].getBNumber() << "\n";
						}
					}
				}
				if(count == dvdCapacity)
				{
					cout << "Marina Cafe does not have the movie. sorry\n";
				}

			}else if(choice == 2)
			{
				string serchedBTitle;
				cout << "Enter the title of book you are looking for?\n";
				getline(cin,serchedBTitle);
				int counter;
				for(counter = 0; counter < bookCapacity; counter++)
				{
					if(books[counter].getTitle() == serchedBTitle)
					{
						cout << "Marina Cafe have the book\n";
						if(books[counter].getBorrowed())
						{
							cout << "the book is avaialble\n";
						}
						else
						{
							cout << "The book is not curretly avaialble\n";
							cout << "Borrowed user: " << books[counter].getBNumber() <<"\n";
						}
					}
					else
					{
						cout << "Marina Cafe does not have this book\n";
					}
				}
			}
			else
			{
				cout << "invalid num\n";
			}
		}
		else if(action == 7)
		{//search a specific book
			bool exisist = false;
			string searchedTitle;
			int choice = 0;
			cout << "type 1 to search a book\n";
			cout << "type 2 to search a dvd\n";
			cin >> choice;
			if(choice == 1)
			{
				cout << "Enter the title of a book\n";
				getline(cin, searchedTitle);
				int k;
				for(k = 0; k < bookCapacity; k++)
				{
					if(books[k].getTitle()==searchedTitle)
					{
						exisist = true; 
					}
					else
					{
						exisist = false;
					}
				}
				if(exisist)
				{
					cout << "\n---Book---Information---\n";
					books[k].printAll(cout);
					cout << "\n";
				}
				else
				{
					cout << "Cannot find the book\n";
				}
			}
			else if(choice == 2)
			{
				cout << "Enter the title of dvd\n";
				getline(cin, searchedTitle);
				int counting;
				for(counting = 0; counting < dvdCapacity; counting++)
				{
					if(dvds[counting].getTitle() == searchedTitle)
					{
						exisist = true;
					}
					else
					{
						exisist = false;
					}
				}
				if(exisist)
				{
					cout << "\n-----DVD---Infromation----\n";
					dvds[counting].printAll(cout);
					cout <<  "\n";
				}
				else
				{
					cout << "Cannot find the DVD\n";
				}

			}
			else
			{
				cout << "invalid number\n";
			}
		}
		else if(action == 8)
		{//search by author
			string author_name; 
			int i;
			cout << "Enter authour name to look for\n";
			getline(cin, author_name);
			cout << "Books Wrritten by" << author_name << " \n";
			for(i = 0; i < bookCapacity; i++)
			{
				if (books[i].getAuthor() == author_name)
				{
					cout << "Title: " << books[i].getTitle() << "\n";
				}
			}
			if(i == bookCapacity)
			{
				cout << "books the author writes does not exisist\n";
			}

		}
		else if(action == 9)
		{//All information
			cout << "All information\n";
			cout << "Borrowed Book Information\n";
			for(int walker = 0; walker < bookCapacity; walker++)
			{
				if(!books[walker].getBorrowed())
				{
					cout << "Title: " << books[walker].getTitle() << "\n";
					cout << "User: " << books[walker].getBNumber() << "\n\n";
				}
			}
			cout << "\nBorrowed DVD Information\n";
			for(int walker = 0; walker < dvdCapacity; walker++)
			{
				cout << "Title: " <<  dvds[walker].getTitle() << "\n";
				cout << "User; " << dvds[walker].getBNumber() << "\n\n";
			}

		}
		else if(action == 10)
		{
			cout << "programmed by Kaya Ota\n";
		}
		

	}while(action != 10 );

	return 0;
}



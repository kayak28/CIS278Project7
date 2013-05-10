#include <iostream>
#include "Book.h"
#include <string>
using namespace std;

Book::Book()
{
	author = " ";
	coverType = ' ';
}
Book::Book(string titl, string auth, char cover):LandItem(titl, 'B')
{
	//title = setTitle(titl);
	author = auth;
	coverType = cover;
}
void Book::setAuthor(string auth)
{
	author = auth;
}
void Book::setCover(char type)
{
	coverType = type;
}
string Book::getAuthor() const
{
	return author;
}
char Book::getCover() const
{
	return coverType;
}
void Book::printAll(ostream& out)
{
	 out << "Title: " << this->getTitle() << "\n" 
		 << "Author: " << this->getAuthor() << "\n" 
		 << "MediumType: " << this->getMedium() << "\n"
		 << "coverType: " << this->getCover() << "\n"
		 << "Avairable: " << this->getBorrowed() << "\n";
	if(this->getBorrowed() == true)
	{
		out << "Borrower: " << this->getBNumber() << "\n";
	}
}
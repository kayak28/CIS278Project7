//Book

class Book:public LandItem 
{
	private:
		string author;
		char coverType;

	public:
		Book();
		Book(string titl, string auth, char cover);
		void setAuthor(string auth);
		void setCover(char type);
		string getAuthor() const;

};
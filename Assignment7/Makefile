run : Application.o Book.o DVD.o LandItem.o
	g++ -o run Application.o Book.o DVD.o LandItem.o
Application.o : Application.cpp
	g++ -c Application.cpp
Book.o : Book.cpp
	g++ -c Book.cpp
DVD.o : DVD.cpp
	g++ -c DVD.cpp
LandItem.o : LandItem.cpp
	g++ -c LandItem.cpp
clean :  Application.o Book.o DVD.o LandItem.o
	rm Application.o Book.o DVD.o LandItem.o 


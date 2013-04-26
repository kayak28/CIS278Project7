//Makefile

run : Cat.o main.o Dog.o Animal.o
	g++ -o run Cat.o main.o Dog.o Animal.o
Cat.o : Cat.cpp
	g++ -c Cat.cpp
Dog.o : Dog.cpp
	g++ -c Dog.cpp
Animal.o : Animal.cpp
	g++ -c Animal.cpp
main.o : main.cpp
	g++ -c main.cpp 
clean : Cat.o Dog.o main.o Animal.o run 
	rm Cat.o Dog.o main.o Animal.o run 
//Makefile

run: DVDVideo.o VHSVideo.o Video.o ListVideo.o
	g++ -o run DVDVideo.o VHSVideo.o Video.o ListVideo.o

DVDVideo.o: DVDVideo.cpp
	g++ -c DVDVideo.cpp

VHSVideo.o: VHSVideo.cpp
	g++ -c VHSVideo.cpp

Video.o: Video.cpp
	g++ -c Video.cpp
ListVideo.o: ListVideo.cpp
	g++ -c ListVideo.cpp
clean:
	rm DVDVideo.o VHSVideo.o Video.o ListVideo.o run

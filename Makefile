main: main.o vectors.o
	g++ -o main main.o vectors.o

tests: tests.o vectors.o
	g++ -o tests tests.o vectors.o

main.o: main.cpp vectors.h
	g++ -c -std=c++11 main.cpp

vectors.o: vectors.cpp vectors.h
	g++ -c -std=c++11 vectors.cpp

tests.o: tests.cpp doctest.h vectors.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f *.o main tests *.gch

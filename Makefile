all: output

output: insidefunction.o main.o start.o
	g++ insidefunction.o main.o start.o -std=c++11 -pthread -o output

insidefunction.o: insidefunction.o
	g++ -c insidefunction.cpp

main.o: main.o
	g++ -c main.cpp 

start.o: start.o
	g++ -c start.cpp -std=c++11 -pthread

clean: 
	rm -rf *o output


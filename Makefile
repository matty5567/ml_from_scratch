
main: main.o reader.o
	g++ main.o reader.o -o MNIST.out
	./MNIST.out

main.o: main.cpp
	g++ -c main.cpp

reader.o: reader.cpp
	g++ -c reader.cpp

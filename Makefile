
main: main.o reader.o math.o
	g++ main.o reader.o math.o -o MNIST.out
	./MNIST.out

main.o: main.cpp
	g++ -c main.cpp

reader.o: reader.cpp
	g++ -c reader.cpp

math.o: math.cpp
	g++ -c math.cpp

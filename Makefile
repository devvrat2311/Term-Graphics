cleanobj: build
	rm *.o

build: board.o
	g++ -I./include *.o main.cpp -o run 

board.o:
	g++ -I./include -c src/*.cpp 

clean:
	rm  run  



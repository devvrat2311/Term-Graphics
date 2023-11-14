build: board.o
	g++ -I./include  -lncurses *.o main.cpp -o build 

board.o:
	g++ -I./include -c src/*.cpp 

clean:
	rm *.o build 



build: board.o
	g++ -I./include  -lncurses *.o main.cpp -o run 

board.o:
	g++ -I./include -c src/*.cpp 

clean:
	rm *.o run 



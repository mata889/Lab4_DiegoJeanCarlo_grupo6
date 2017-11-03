Principal:	Lab4_JeanDiego_grupo6.o player.o minesweeper.o
	g++ main.o player.o minesweeper.o -o Principal -lncurses
main.o:	Lab4_JeanDiego_grupo6.cpp player.h minesweeper.h
	g++ -c Lab4_JeanDiego_grupo6.cpp
player.o:	player.h player.cpp
	g++ -c player.cpp
minesweeper.o:	minesweeper.h minesweeper.cpp
	g++ -c minesweeper.cpp

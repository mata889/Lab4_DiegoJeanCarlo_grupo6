#ifndef MINESWEEPER_H
#define MINESWEEPER_H

#include<string>
using namespace std;

class minesweeper{
	private:
		int minas;
		int size;
		int** matrizNumero;
		char** matrizChar;

	public:
		minesweeper(int,int,int**,char**);
		minesweeper();
		//
		int getMinas();
		int getSize();
		int** getMatrizNumero();
		char** getMatrizChar();
		//
		void setMinas(int);
		void setSize(int);
		void setMatrizNumero(int**);
		void setMatrizChar(char**);
		//
		char**CrearMatriz(int);
		int**llenarMatriz(int,int);
		
		~minesweeper();//destructor


};
#endif

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
		char**CrearMatrizChar(int);
		void llenarMatriz(int**);
		void imprimirMatrix(int**);
		void deleteMatrix(int**,int);
		int** CrearMatrizInt(int);
		
		~minesweeper();//destructor


};
#endif

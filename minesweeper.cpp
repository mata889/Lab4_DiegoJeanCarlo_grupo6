#include "minesweeper.h"
#include <iostream>

using namespace std;

minesweeper::minesweeper(){
	this->minas;
	this->size;
	this->matrizNumero;
	this->matrizChar;
}
minesweeper::minesweeper(int pSize,int pMinas,int**pMatrizNumero,char**pMatrizChar){
	minas=pMinas;
	size=pSize;
	matrizNumero=pMatrizNumero;
	matrizChar=pMatrizChar;
}
int minesweeper::getMinas(){
	return minas;
}
int minesweeper::getSize(){
	return size;
}
int** minesweeper::getMatrizNumero(){
	return matrizNumero;
}
char** minesweeper::getMatrizChar(){
	return matrizChar;
}
void minesweeper::setMinas(int pMinas){
	minas=pMinas;
}


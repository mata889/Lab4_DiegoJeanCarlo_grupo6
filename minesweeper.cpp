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
void minesweeper::setSize(int pSize){
	size=pSize;
}
void minesweeper::setMatrizNumero(int**pMatrizNumero){
	matrizNumero=pMatrizNumero;
}
void minesweeper::setMatrizChar(char** pMatrizChar){
	matrizChar=pMatrizChar;
}

minesweeper::~minesweeper(){
	cout<<"bueno"<<endl;
}

char** CrearMatrizChar( int size){
	char** retorno = new char*[size];

	for(int i=0;i<size;i++){
		retorno[i]= new char[size];
	}

	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			retorno[i][j]= 0;
		}
	
	}

	return retorno;
	}//Fin del metodo


int** CrearMatrizInt( int size){
	int** retorno = new int*[size];

	for(int i=0;i<size;i++){
		retorno[i]= new int[size];
	}

	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			retorno[i][j]= 0;
		}
	
	}

	return retorno;
	}//Fin del metodo

void llenarMatrix(int** matriz){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			matriz[i][j]= 0;
		}
	}

}

void deleteMatrix(int** matrix, int size){
	for(int i=0;i<10;i++){
		delete matrix[i];
		matrix[i]=NULL;
	}
	delete[] matrix;

}

void imprimirMatrix(int** m){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}


}


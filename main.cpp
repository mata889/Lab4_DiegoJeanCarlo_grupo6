#include <iostream>
#include <string>
#include "minesweeper.h"
#include "player.h"
#include <vector>

bool recursivo(int** , int , int , int);

using namespace std;
int main(){
	
	char resp='s';
	int opcion;
	while(resp=='s'|| resp=='S'){
		cout<<"BIENVENIDO \n 1-Login \n 2-Crear usuario \n 3-Ver puntuaciones \n 4-Salir"<<endl<<endl;
		cin>>opcion;
		cout<<endl;
		vector<player> players;
		switch(opcion){
			case 1:{
					string usuario;
					string contra;
					int n;
					int k;
				    cout<<"Ingrese su nombre de usuario"<<endl;
					cin>>usuario;
					cout<<"Ingrese password"<<endl;
					cin>>contra;
			   
			
					cout<<"------ A JUGAR ------"<<endl;
					cout<<"Ingrese n (dimension de la matriz) \n Debe ser mayor a 10:"<<endl;
					cin>>n;
					while(n<10){
						cout<<"Ingrese n de nuevo"<<endl;
						cin>>n;
					}
					cout<<"Ingrese k (numero de minas) \n Debe ser menor a n:"<<endl;
					cin>>k;
					while(k>n){
						cout<<"Ingrese k nuevamente"<<endl;
						cin>>k;
					}
					


					//cout<<endl<<endl;

					//minesweeper obj;					

					//int** matrixnum = obj.CrearMatrixInt(n);
					//obj.imprimirMatrix(matrixnum);


				}// fin case 1
				break;

			case 2:{
				string nombre;
				string usuario;
				string contra;
				
				
				cout<<"Ingrese su nombre:"<<endl;
				cin>>nombre;
				cout<<"Ingrese su username:"<<endl;
				cin>>usuario;
				cout<<"Ingrese su password:"<<endl;
				cin>>contra;
				
				player u = player(nombre, usuario, contra);


				players.push_back(u);
			   
			   }// fin case 2
			   break;
		case 3:{
//				cout<<"Los Highscore son:"<<endl
//					for(int i=0;i<players.size();i++){
//					cout<<player[i]<<endl;
//					}
			   
			   }// fin case 3
			   break;
		case 4:{
			   cout<<"Adios . vuelva pronto"<<endl;
				resp='n';
			   }//fin case 4
			   break;
	
	
	}//fin switch	
	}//fin while respuesta de usuario


	return 0;
}

bool recursiva(int** m, int x, int y, int size){
	//	printMatrix(m,size);
		cout<<endl;
		cin.ignore();
				
		if(y==size-1){
			m[x][y]=9;
			cout<<"PERDIO"<<endl;
			return true;
			}else{
														
				bool salio = false;
				m[x][y]=9 ;

				//arriba
			if(x>0 && !salio){
					if(m[x-1][y]== 0){
				salio=recursiva(m, size, x-1, y);
				}
			}

			//derecha
			if(y+1 < size && !salio){
				if(m[x][y+1]==0){
				salio= recursiva(m, size, x, y+1);
					}
				}

			//abajo
		if(x+1 <size && !salio){
			if(m[x+1][y]==0){
			salio=recursiva(m, size, x+1, y);
					}
			}

		//izquierda
			if(y>0 && !salio){

			if(m[x][y-1]==0){
		salio=recursiva(m, size, x, y-1);
					}
					}
																											
			if(salio){
					m[x][y]==0;
				return salio;
			}

																												
																												
		}



}//fin de la recursiva
																				

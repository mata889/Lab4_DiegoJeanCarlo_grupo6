#include <iostream>
#include <string>

using namespace std;
int main(){
	
	char resp='s';
	int opcion;
	while(resp=='s'|| resp=='S'){
		cout<<"BIENVENIDO \n 1-Login \n 2-Crear usuario \n 3-Ver puntuaciones \n 4-Salir"<<endl<<endl;
		cin>>opcion;
		cout<<endl;
//		vector<jugador> players;
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
					

					cout<<endl<<endl;


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

//				players.push_back(usuario);
			   
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

#ifndef PLAYER_H
#define PLAYER_H

#include<string>
using namespace std;

class player{
	private:
		string nombre;
		string usuario;
		string contra;
	public:
		player(string,string,string);
		player();
		//
		string getNombre();
		string getUsuario();
		string getContra();
		//
		void setNombre(string);
		void setUsuario(string);
		void setContra(string);
		
		~player();//destructor	
};

#endif

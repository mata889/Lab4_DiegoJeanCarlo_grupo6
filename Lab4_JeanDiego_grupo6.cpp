#include <iostream>
#include <ncurses.h>
#include <string>
#include <curses.h>
#include <vector>
#include "player.h"
#include "minesweeper.h"

using namespace std;
int main(){
	initscr();
	//vector<player>jugadores;
	echo();
	printw("Bienvenido al BuscaMinas");
	getch();
	char seguir='s';
	do{
		char opcion;
		printw("a.Login-\nb.CrearUsuario-\nc.Salir-");
		opcion=getch();
		clear();
		refresh();	
		switch(opcion){
			case 'a':{
			char usuario[100];
			char contra[100];

			printw("Introduzca su usuario:");
			refresh();
			getnstr(usuario,100);

			printw("Introduzca la contrasena:");
			refresh();
			getnstr(contra,100);
			}break;
			case 'b':{

			char nombre[100];
			char usuario1[100];
			char contra1[100];

			printw("Introduzca su nombre:");
			refresh();
			getnstr(nombre,100);

			printw("introudzca su usuario:");
			refresh();
			getnstr(usuario1,100);

			printw("introduzca su contrasena:");
			refresh();
			getnstr(contra1,100);

			string Nombre=nombre;
			string Usuario=usuario1;
			string Contra=contra1;
			
			//player* objeto=new player(Nombre,Usuario,Contra);
			//cout<<"nombre"<<objeto->getNombre()<<endl;
			//jugadores.push_back(objeto);
			//delete objeto;	
			}break;
		}
			
	}while(opcion=='c');
endwin();
return 0;
}

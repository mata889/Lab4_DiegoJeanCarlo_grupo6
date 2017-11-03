#include "player.h"
#include <iostream>

using namespace std;

player::player(){
	this->nombre="";
	this->usuario="";
	this->contra="";}

player::player(string pNombre,string pUsuario,string pContra){
	nombre=pNombre;
	usuario=pUsuario;
	contra=pContra;
} 

string player::getNombre(){
	return nombre;
}
string player::getUsuario(){
	return usuario;
}
string player::getContra(){
	return contra;
}
void player::setNombre(string pNombre){
	nombre=pNombre;
}
void player::setUsuario(string pUsuario){
	usuario=pUsuario;
}
void player::setContra(string pContra){
	contra=pContra;
}
player::~player(){
	cout<<"Se destruyo"<<endl;
}	


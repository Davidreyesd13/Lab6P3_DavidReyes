#include "Luna_Superior.h"

Luna_Superior::Luna_Superior()//constructor vacio
{
}

Luna_Superior::Luna_Superior(string nombre, int posicion, int vida, int ataque)//constructor sobrecargador
{
	this->nombre=nombre;
	this->posicion = posicion;
	this->vida = vida;
	this->ataque = ataque;
}

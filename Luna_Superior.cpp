#include "Luna_Superior.h"


Luna_Superior::Luna_Superior()//constructor vacio
{
}

Luna_Superior::Luna_Superior(string nombre, int posicion, int vida, int ataque)//constructor sobrecargador
{
	vida = rand() % 101 + 400; // Generar vida aleatoria entre 400 y 500
	ataque = rand() % 251 + 150; // Generar ataque aleatorio entre 150 y 400

}

string Luna_Superior::getNombre() {
	return nombre;
}
int Luna_Superior::getPosicion() {
	return posicion;
}

int Luna_Superior::getVida() {
	return vida;
}

int Luna_Superior::getAtaque() {
	return ataque;
}
#pragma once
#include <string>
using namespace std;
class Luna_Superior
{
public:
	Luna_Superior();
	Luna_Superior(string nombre, int posicion, int vida, int ataque);
    int getAtaque();
    int getVida();
    int getPosicion();
    string getNombre();
private:
    string nombre;
    int posicion;
    int vida;
    int ataque;
};


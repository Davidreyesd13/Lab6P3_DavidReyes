#include "Pilar.h"
Pilar::Pilar() {

}

Pilar::Pilar(string name, int vida, int ataque, Katana color,Respiracion poder, int lunasv)
{
	this->lunasv = lunasv;
	cazador(name, vida, ataque, color,poder);
}

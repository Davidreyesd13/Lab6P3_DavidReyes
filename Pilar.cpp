#include "Pilar.h"
Pilar::Pilar(string name):cazador(name,opcion)
{
	lunasv = 0;
	vida += rand() % 11 + 80; // Aumentar vida en un rango aleatorio entre 80 y 90
	puntosAtaque += 100; // Aumentar puntos de ataque en 100
	
}

#include "Respiracion_Fuego.h"
int Respiracion_Fuego::obtenerRangoPoder()
{
	srand(time(NULL));
	int result = 80 + rand() % (100 + 1 - 80);
	return result;
}

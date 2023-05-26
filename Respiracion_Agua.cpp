#include "Respiracion_Agua.h"

int Respiracion_Agua::obtenerRangoPoder()
{
	srand(time(NULL));
	int result = 60 + rand() % (80 + 1 - 60);
	return result;
}

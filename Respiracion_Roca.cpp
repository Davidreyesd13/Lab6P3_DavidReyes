#include "Respiracion_Roca.h"

int Respiracion_Roca::poder() const
{//metodo polimorfico
	srand(time(NULL));
	int result = 100 + rand() % (120 + 1 - 100);
	return result;
}

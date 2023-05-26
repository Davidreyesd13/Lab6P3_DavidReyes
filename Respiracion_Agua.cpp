#include "Respiracion_Agua.h"

int Respiracion_Agua::poder() const
{
	srand(time(NULL));
	int result = 60 + rand() % (80 + 1 - 60);
	return result;
}

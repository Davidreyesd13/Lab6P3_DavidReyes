#pragma once
#include "Respiracion.h"
class Respiracion_Fuego: protected Respiracion
{
	virtual int poder() const {
		srand(time(NULL));
		int result = 80 + rand() % (100 + 1 - 80);
		return result;
	}
};


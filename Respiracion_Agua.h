#pragma once
#include "Respiracion.h"
class Respiracion_Agua: protected Respiracion
{
	 virtual int poder() const {
		srand(time(NULL));
		int result = 60 + rand() % (80 + 1 - 60);
		return result;
	}
};


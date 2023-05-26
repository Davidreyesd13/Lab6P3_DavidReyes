#pragma once
#include "Respiracion.h"
class Respiracion_Roca:protected Respiracion {
	virtual int poder() const {
		srand(time(NULL));
		int result = 100 + rand() % (120 + 1 - 100);
		return result;
	}
};


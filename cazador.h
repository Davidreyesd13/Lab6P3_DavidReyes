#pragma once
#include <iostream>
#include "Katana.h"
#include "Respiracion.h"
#include <string>
using namespace std;
class cazador
{
	string name;
	int vida, ataque;
	Katana color;

public:
	cazador(string name,int vida,int ataque,Katana color,Respiracion poder);
	cazador();
};


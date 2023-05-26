#pragma once
#include <string>
using namespace std;
class Katana
{
	int ataque;
	string color;
public:
	Katana();
	Katana(int atac, string color);
	string getColor();
	int getAtaque();
	string generarColorAleatorio();
};


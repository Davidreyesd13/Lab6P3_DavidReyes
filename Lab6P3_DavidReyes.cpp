#include <iostream>
#include <vector>
#include "cazador.h"
#include "Luna_Superior.h"
#include "Pilar.h"
#include "Respiracion.h";
using namespace std;
void menu() {
	vector<cazador> cazadores;
	cazadores.push_back(Pilar();
	vector<Luna_Superior> lunas;
	int respuesta = 1;
	while (respuesta!=7)
	{
		cout << "1.Crear Cazador\n2.Crear Pilar\n3.Crear Luna Superior\n4.Imprimir Cazadores y Pilares\n5.Imprimir Lunas superiores\n6.Simulacion\n7.Salir "<<endl;
		cin >> respuesta;
		switch (respuesta) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			cout << "Opcioncion no valida";
		}
	}
}
int main()
{
	menu();

	return 0;
}
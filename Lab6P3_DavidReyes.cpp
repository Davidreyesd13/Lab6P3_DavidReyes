#include <iostream>
#include <vector>
#include "cazador.h"
#include "Luna_Superior.h"
#include "Pilar.h"
#include "Respiracion.h"
using namespace std;
void imprimir(vector<cazador*>cazadores) {
	for (int i = 0; i < cazadores.size(); i++)
	{
		cout << "Nombre: " << cazadores.at(i)->getnombre() << std::endl;
		cout << "Vida: " << cazadores.at(i)->getvida() << std::endl;
		cout << "Ataque total: " << cazadores.at(i)->getpuntosataque() << std::endl;
		cout << "Katana: Color " << cazadores.at(i)->getkatana()->getColor() << ", Ataque " << cazadores.at(i)->getkatana()->getAtaque() << std::endl;
		cout << "Respiración: Rango de poder " << cazadores.at(i)->getrespiracion()->obtenerRangoPoder() << std::endl;

	}
}
int random_atack_Vida(int min,int max) {//metodo random para crear la vida y el ataque;

	srand(time(NULL));
	int reusult = min + rand() % (max + 1 - min);

}
void menu() {
	int pos;
	Respiracion r;
	string nombre;
	int respiracion;
	Pilar p;
	cazador* cazadorcomun;
	vector<cazador*> cazadores;
	cazadores.push_back(p("Regonku",));//creacion de pilar
	vector<Luna_Superior*> lunas;
	int respuesta = 1;
	while (respuesta != 7)
	{
		cout << "1.Crear Cazador\n2.Crear Pilar\n3.Crear Luna Superior\n4.Imprimir Cazadores y Pilares\n5.Imprimir Lunas superiores\n6.Simulacion\n7.Salir " << endl;
		cin >> respuesta;
		switch (respuesta) {
		case 1:
			cout << "Ingrese un nombre: ";
			cin >> nombre;
			cout << "Tipo de respiracion: \n1.Agua\n2.Fuego\n3.Roca\nElija una opcion: ";
			cin >> respiracion;
			cazadorcomun = new cazador(nombre,respiracion);
			cazadores.push_back(cazadorcomun);
			break;
		case 2:
			cout << "Ingrese un nombre: ";
			cin >> nombre;
			cout << "Tipo de respiracion: \n1.Agua\n2.Fuego\n3.Roca\nElija una opcion: ";
			cin >> respiracion;
			
			break;
		case 3:
			cout << "Ingrese un nombre: ";
			cin >> nombre;
			cout << "Ingrese la posicion: ";
			cin >> pos;
			
			break;
		case 4:
			imprimir(cazadores);
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
	cazadores.clear();
	lunas.clear();
}
int main()
{
	menu();

	return 0;
}
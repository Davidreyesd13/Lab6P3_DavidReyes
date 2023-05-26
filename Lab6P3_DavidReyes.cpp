#include <iostream>
#include <vector>
#include "cazador.h"
#include "Luna_Superior.h"
#include "Pilar.h"
#include "Respiracion.h";
using namespace std;
int random_atack_Vida() {//metodo random para crear la vida y el ataque;
	
	srand(time(NULL));
	int reusult = 20+rand() % (30 + 1 - 20);

}
string colorkatana() {
	srand(time(NULL));
	string nk;//nombre katana
	int result = 1 + rand() % (4 + 1 - 1);
	switch (result) {
	case 1:
		nk = "Rojo";
		break;
	case 2:
		nk = "negro";
		break;
	case 3:
		nk = "morado";
		break;
	case 4:
		nk = "naranja";
		break;
	}
}
void menu() {
	srand(time(NULL));
	string nombre;
	vector<cazador> cazadores;
	cazadores.push_back(Pilar("Rengoku", random_atack_Vida()+ (80 + rand() % (90 + 1 - 80)), random_atack_Vida()+100, Katana(10+rand()%(20+1-20),"Roja"),Respiracion("Fuego"), 1));//creacion de pilar
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
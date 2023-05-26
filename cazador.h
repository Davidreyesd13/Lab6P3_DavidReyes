#pragma once
#include <iostream>
#include "Katana.h"
#include "Respiracion.h"
#include <string>
#include "Respiracion_Agua.h"
#include "Respiracion_Fuego.h"
#include "Respiracion_Roca.h"
using namespace std;
class cazador
{
    Respiracion* generarRespiracionAleatoria(int opcion) {
         // Generar número aleatorio entre 0 y 2
        switch (opcion) {
        case 0:
            return new Respiracion_Agua();
        case 1:
            return new Respiracion_Fuego();
        case 2:
            return new Respiracion_Roca();
        }
        return nullptr;
    }

    string nombre;
    int vida;
    Katana* katana;
    Respiracion* respiracion;
    int puntosAtaque;
public:
	cazador(string name,int opcion);
    string getnombre();
    int getvida();
    Katana* getkatana();
    Respiracion* getrespiracion();
    int getpuntosataque();
	~cazador();

};


#include "cazador.h"

cazador::cazador(string name,int opcion)
{
    vida = rand() % 11 + 20; // Generar vida aleatoria entre 20 y 30
    katana = new Katana();
    respiracion = generarRespiracionAleatoria(opcion);
    puntosAtaque = rand() % 11 + 20;

}

string cazador::getnombre()
{
    return nombre;
}

int cazador::getvida()
{
    return vida;
}

Katana* cazador::getkatana()
{
    return katana;
}

Respiracion* cazador::getrespiracion()
{
    return respiracion;
}

int cazador::getpuntosataque()
{
    return puntosAtaque;
}

cazador::~cazador()
{
    delete katana;
    delete respiracion;
}

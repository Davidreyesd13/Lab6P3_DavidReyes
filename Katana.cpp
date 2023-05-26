 #include "Katana.h"

Katana::Katana()
{
}

Katana::Katana(int atac, string color)
{
    
        ataque = rand() % 11 + 10; // Generar ataque aleatorio entre 10 y 20
        color = generarColorAleatorio();
   
}
string Katana::getColor() {
    return color;
}

int Katana::getAtaque() {
    return ataque;
}
string generarColorAleatorio() {
    std::string colores[] = { "rojo", "negro", "morado", "naranja" };
    int indice = rand() % 4; // Generar índice aleatorio entre 0 y 3
    return colores[indice];
}

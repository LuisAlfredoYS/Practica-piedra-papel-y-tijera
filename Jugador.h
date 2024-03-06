#pragma once
#include <iostream>

class Jugador {
private:
    int opcion;
    int puntaje;

public:
    Jugador();

    // Getters y Setters
    int GetOpcion();
    int GetPuntaje();
    void SetOpcion(int nuevaOpcion);
    void SetPuntaje(int nuevoPuntaje);

    void Seleccionar();
    void Evaluar(int jugado);
};

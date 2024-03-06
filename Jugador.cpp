#include "Jugador.h"
#include <iostream>
using namespace std;
Jugador::Jugador()
{
    opcion = 0;
	puntaje = 0;
}

int Jugador::GetOpcion()
{
	return opcion;
}

void Jugador::SetOpcion(int nuevaOpcion)
{
		opcion = nuevaOpcion;
}

int Jugador::GetPuntaje()
{
	return puntaje;
}

void Jugador::SetPuntaje(int nuevoPuntaje)
{
		puntaje = nuevoPuntaje;
}

void Jugador::Seleccionar()
{
    cout << "Selecciona una opcion:\n";
    cout << "1. Papel\n";
    cout << "2. Tijera\n";
    cout << "3. Piedra\n";
    cin >> opcion;

    while (opcion < 1 || opcion > 3) {
        cout << "Opcion invalida "<<endl;
        cin >> opcion;
    }
}

void Jugador::Evaluar(int opcionContrincante)
{
    if (opcion == opcionContrincante) {
        cout << "Empate"<<endl;
    }
    else if ((opcion == 1 && opcionContrincante == 3) ||
        (opcion == 2 && opcionContrincante == 1) ||
        (opcion == 3 && opcionContrincante == 2)) {
        cout << "ganaste"<<endl;
        puntaje++;
    }
    else {
        cout << "Perdiste"<<endl;
    }
}



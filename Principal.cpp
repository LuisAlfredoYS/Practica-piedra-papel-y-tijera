#include <iostream>
#include <cstdlib>
#include "Jugador.h"
#include <ctime>
using namespace std;
int main() {
	srand(time(0));
	Jugador jugador1;
	Jugador jugador2;
	int rondas = 1;
	do {
		int opcion1 = rand() % 3 + 1;
		cout << "Ronda : " << rondas << endl;
		cout << "-----------------------------------------" << endl;
		jugador1.Seleccionar();
		jugador2.SetOpcion(opcion1);
		jugador1.Evaluar(jugador2.GetOpcion());
		if (opcion1 == 1 && jugador1.GetOpcion() == 3 || opcion1 == 2 && jugador1.GetOpcion() == 1 || opcion1 == 3 && jugador1.GetOpcion() == 2) {
			jugador2.SetPuntaje(jugador2.GetPuntaje() + 1);
		}
		cout << "Puntaje Jugador1 : " << jugador1.GetPuntaje() << endl;
		cout << "Puntaje Jugador2 : " << jugador2.GetPuntaje() << endl;
		cout<<"-----------------------------------------"<<endl;
		rondas++;
	} while (jugador1.GetPuntaje() !=3 && jugador2.GetPuntaje()!=3);
	if (jugador1.GetPuntaje() == 3) {
		cout<<"Felicidades Jugador 1 ganaste en "<<rondas-1<<" Rondas" << endl;
	}
	else {
		cout<<"Felicidades Jugador 2 ganaste en "<<rondas-1<<" Rondas"<<endl;
	}
	


	
	return 0;
}
    
#include <iostream>
#include"Tablero.h"

using namespace std;

void Tablero::incializarTablero()
{
	filaActual = 0;
	numeroFilasEliminadas = 0;
	//Debemos cambiar todos los objeto comunes por manejor por punteros
	//bloqueSiguiente = NULL;

}

bool Tablero::rotarBloque()
{
	cout << "funcion que rota un bloque" << endl;
	return false;
}

void Tablero::bajarBloque()
{
	cout << "funcion que baja un bloque" << endl;
}

bool Tablero::moverBloque(int direccion) {
	cout << "funcion que mueve a la derecha o a la izquierda un bloque" << endl;
	return false;
}
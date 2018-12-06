#ifndef funciones_h
#define funciones_h
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <typeinfo>
#include "grafo.h"
#include "nodo.h"
#include "ruta.h"

//PRE:-
//POST: Recibe el codigo IATA de partida y de llegada.
void menu();

//PRE: Recibe el archivo a utilizar.
//POST: Devuelve un campo de una linea en formato string.
std::string leerDato(std::ifstream &archivo);

//PRE:- Recibe el archivo a utilizar.
//POST: Devuelve la longitud del archivo(cantidad de lineas).
int longitudArchivo(std::ifstream &archivo);

//PRE: Recibe un codigo de tres letras de tipo string.
//POST: Convierte el codigo a ascii y lo devuelve.
int calcularAscii(std::string codigo);

//PRE: Recibe el archivo a utilizar.
//POST: Crea un objeto Ruta con los datos de una linea del archivo y devuelve
// un puntero a la misma.
Ruta* crearVuelo(std::ifstream &archivo);

//PRE: Recibe el codigo IATA, un array de punteros a rutas y la longitud del archivo.
//POST: Muesta los datos del Aeropuerto de salida o llegada, dependiendo del codigo introducido.
int mostrarDatos(string codigo, Ruta* rutas[], int longitud);

#endif //funciones_h

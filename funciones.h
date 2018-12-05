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

void menu();
std::string leerDato(std::ifstream &archivo);
int longitudArchivo(std::ifstream &archivo);
int calcularAscii(std::string codigo);
Ruta* crearVuelo(std::ifstream &archivo);
int mostrarDatos(string codigo, Ruta* rutas[], int longitud);

#endif /* funciones_h */


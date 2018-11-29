#ifndef funciones_h
#define funciones_h
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <typeinfo>

void menu();
std::string leerDato(std::ifstream &archivo);
void obtenerDatos(std::ifstream &archivo);
int longitudArchivo(std::ifstream &archivo);


#endif /* funciones_h */

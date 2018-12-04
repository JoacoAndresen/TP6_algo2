#ifndef NODO.H
#define NODO.H
#include <iostream>
#include <string>
#include "funciones.h"
using namespace std;

class Nodo{
    // atributos
private:
    std::string codigo_p;
    std::string aeropuerto_p;
    std::string ciudad_p;
    std::string pais_p;
    std::string codigo_d;
    std::string aeropuerto_d;
    std::string ciudad_d;
    std::string pais_d;
    int costo;
public:
    // Constructor con parametros
    Nodo(std::ifstream &archivo);

    // Obtener codigo_p
    // PRE: -
    // POST: Devuelve el codigo del aeropuerto de procedencia
    std::string obtenerCodigo_p();

};








#endif // NODO

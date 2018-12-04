#include "nodo.h"

// Constructor con parametros
Nodo::Nodo(std::ifstream &archivo){
    codigo_p = leerDato(archivo);
    aeropuerto_p = leerDato(archivo);
    ciudad_p = leerDato(archivo);
    pais_p = leerDato(archivo);
    codigo_d = leerDato(archivo);
    aeropuerto_d = leerDato(archivo);
    ciudad_d = leerDato(archivo);
    pais_d = leerDato(archivo);
    costo = std::stod(leerDato(archivo));
}

std::string Nodo::obtenerCodigo_p(){
    return codigo_p;
}

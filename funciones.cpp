#include "funciones.h"

void menu(){
    std::string codigo_p;
    std::string codigo_d;
    
    std::cout << "Ingrese el codigo IATA de partida: ";
    std::cin >> codigo_p;
    
    std::cout << "Ingrese el codigo IATA de destino: ";
    std::cin >> codigo_d;
    
}

std::string leerDato(std::ifstream &archivo){
    std::string dato;
    archivo >> dato;
    return dato;
}

void obtenerDatos(std::ifstream &archivo){
    std::string codigo_p = leerDato(archivo);
    std::string aeropuerto_p = leerDato(archivo);
    std::string ciudad_p = leerDato(archivo);
    std::string pais_p = leerDato(archivo);
    std::string codigo_d = leerDato(archivo);
    std::string aeropuerto_d = leerDato(archivo);
    std::string ciudad_d = leerDato(archivo);
    std::string pais_d = leerDato(archivo);
    int costo = std::stod(leerDato(archivo));
    
}

int longitudArchivo(std::ifstream &archivo){
    std::string linea;
    int longitud = 0;
    while (!archivo.eof()) {
        getline(archivo, linea);
        longitud++;
    }
    archivo.clear();
    archivo.seekg(0);
    return longitud;
}

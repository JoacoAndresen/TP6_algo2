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

int calcularAscii(std::string codigo){
    int entero = 0;
    entero = (codigo[0]*codigo[0]*codigo[0]) + codigo[1] + codigo[2];

    return entero;
}

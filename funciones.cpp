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


Ruta* crearVuelo(std::ifstream &archivo){
    std::string codigo_p = leerDato(archivo);
    std::string aeropuerto_p = leerDato(archivo);
    std::string ciudad_p = leerDato(archivo);
    std::string pais_p = leerDato(archivo);
    std::string codigo_d = leerDato(archivo);
    std::string aeropuerto_d = leerDato(archivo);
    std::string ciudad_d = leerDato(archivo);
    std::string pais_d = leerDato(archivo);
    // Se convierte el costo tipo string a tipo double con stod.
    int costo = std::stod(leerDato(archivo));

    Ruta* a = new Ruta(codigo_p, codigo_d, aeropuerto_p, aeropuerto_d, ciudad_p, ciudad_d, pais_p, pais_d, costo);

    return a;
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
    entero = (codigo[0]*codigo[0]) + codigo[1] + codigo[2];

    return entero;
}

int mostrarDatos(string codigo, Ruta* rutas[], int longitud){

    for (int i = 0; i < longitud; i++) {

        if (codigo == (rutas[i]->obtenerCp())) {
            cout << "Codigo IATA: " << codigo << endl;
            cout << "Nombre: " << rutas[i]->obtenerNp() << endl;
            cout << "Ciudad: " << rutas[i]->obtenerCip() << endl;
            cout << "Pais: " << rutas[i]->obtenerPp() << endl;

            return 0;
        }
        else if (codigo == (rutas[i]->obtenerCl())){
            cout << "Codigo IATA: " << codigo << endl;
            cout << "Nombre: " << rutas[i]->obtenerNl() << endl;
            cout << "Ciudad: " << rutas[i]->obtenerCil() << endl;
            cout << "Pais: " << rutas[i]->obtenerPl() << endl;

            return 0;
        }
    }
    return 0;
}

#include "funciones.h"

int main(){
    
    std::ifstream archivo;
    archivo.open("/Users/joaquinandresen/Desktop/Algoritmos y Programación II/TP6/TP6/vuelos.txt");
    
    obtenerDatos(archivo);
    
    
    archivo.close();
    
    return 0;
}

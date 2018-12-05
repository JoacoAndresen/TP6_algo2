#include "funciones.h"

using namespace std;

int main(){
    
    
    
    Graph g(9999);
    
    std::ifstream archivo;
    archivo.open("/Users/joaquinandresen/Desktop/Algoritmos y Programación II/TP6/TP6/vuelos.txt");
    
    int longitud = longitudArchivo(archivo) - 1;
    
    Ruta* rutas[longitud];
    
    
    for (int i = 0; i < longitud; i++) {
        Ruta* a = crearVuelo(archivo);
        
        rutas[i] = a;
        
        
        g.addEdge(a->obtenerAscii_p(), a->obtenerAscii_l(), a->obtenerCos());
    }
    
    string partida;
    string destino;
    
    cout << "Ingrese el codigo IATA de partida: ";
    cin >> partida;
    cout << "Ingrese el codigo IATA del destino: ";
    cin >> destino;
    
    cout << endl;
    
    cout << "La ruta mas economica es: " << endl;
    cout << endl;
    cout << "Partida: " << endl;
    mostrarDatos(partida, rutas, longitud);
    
    cout << endl;
    
    cout << "Destino: " << endl;
    mostrarDatos(destino, rutas, longitud);
    
    cout << endl;
    
    cout << "El costo más bajo de " << partida << " a " << destino << " es: " << g.shortestPath(calcularAscii(partida), calcularAscii(destino)) << endl;
    
    
    archivo.close();
    
    
    
    return 0;
}




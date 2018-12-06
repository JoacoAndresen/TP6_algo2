#include "funciones.h"

using namespace std;

int main(){
    //Se crea el grafo
    Grafo g(9999);

    // Se abre el archivo
    std::ifstream archivo;
    archivo.open("vuelos.txt");

    // Longitud del archivo (lineas)
    int longitud = longitudArchivo(archivo) - 1;

    // Array de punteros a rutas
    Ruta* rutas[longitud];

    // Se llena la lista de punteros 'rutas'
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

    if(g.caminoMasCorto(calcularAscii(partida), calcularAscii(destino)) > 99999){
        cout << "La ruta solicitada no esta conectada." << endl;
    }
    else{
        cout << "La ruta mas economica es: " << endl;
        cout << endl;
        cout << "Partida: " << endl;
        mostrarDatos(partida, rutas, longitud);
        cout << endl;
        cout << "Destino: " << endl;
        mostrarDatos(destino, rutas, longitud);
        cout << endl;
        cout << "El costo más bajo de " << partida << " a " << destino << " es: " << g.caminoMasCorto(calcularAscii(partida), calcularAscii(destino)) << endl;

        archivo.close();

        return 0;
    }
}

#ifndef ruta_h
#define ruta_h
#include <string>

using namespace std;

class Ruta{
private:
    string codigo_p;
    string codigo_l;
    string nombre_p;
    string nombre_l;
    string ciudad_p;
    string ciudad_l;
    string pais_p;
    string pais_l;
    int costo;
    int ascii_p;
    int ascii_l;


public:
    // Constructores
    // PRE: Datos validos
    // POST: Crea el objeto Ruta
    Ruta(string cp, string cl, string np, string nl, string cip, string cil, string pp, string pl, int cos);

    // PRE: -
    // POST: Crea el objeto Ruta vacio
    Ruta();

    // Metodos

    // PRE: -
    // POST: Devuelve el codigo de partida
    string obtenerCp();

    // PRE: -
    // POST: Devuelve el codigo del destino
    string obtenerCl();

    // PRE: -
    // POST: Devuelve el nombre del aeropuerto de partida
    string obtenerNp();

    // PRE: -
    // POST: Devuelve el nombre del aeropuerto destino
    string obtenerNl();

    // PRE: -
    // POST: Devuelve la ciudad de partida
    string obtenerCip();

    // PRE: -
    // POST: Devuelve la ciudad destino
    string obtenerCil();

    // PRE: -
    // POST: Devuelve el pais de partida
    string obtenerPp();

    // PRE: -
    // POST: Devuelve el pais destino
    string obtenerPl();

    // PRE: -
    // POST: Devuelve el costo
    int obtenerCos();

    // PRE: -
    // POST: Devuelve el ascii de partida
    int obtenerAscii_p();

    // PRE: -
    // POST: Devuelve el ascii destino
    int obtenerAscii_l();

};

#endif /* ruta_h */

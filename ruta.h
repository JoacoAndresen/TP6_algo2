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
    Ruta(string cp, string cl, string np, string nl, string cip, string cil, string pp, string pl, int cos);
    Ruta();
    
    string obtenerCp();
    string obtenerCl();
    string obtenerNp();
    string obtenerNl();
    string obtenerCip();
    string obtenerCil();
    string obtenerPp();
    string obtenerPl();
    int obtenerCos();
    int obtenerAscii_p();
    int obtenerAscii_l();
    
};

#endif /* ruta_h */

#ifndef arista_h
#define arista_h
#include "nodo.h"

class Arista{
private:
    Nodo* partida;
    Nodo* llegada;
    int costo;
    
public:
    Arista(Nodo* p, Nodo* l, int c);
    
    void setNodos(Nodo* p, Nodo* l);
};

#endif /* arista_h */

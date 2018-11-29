#include "arista.h"

Arista::Arista(Nodo* l, int c){
    llegada = l;
    costo = c;
}

void Arista::setNodos(Nodo* l){
    llegada = l;
}

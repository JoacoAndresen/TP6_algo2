#include "nodo.h"


NodoListaAdj::NodoListaAdj(int _v, int _c){
    v = _v;
    costo = _c;
}

int NodoListaAdj::obtenerV(){
    return v;
}

int NodoListaAdj::obtenerCosto(){
    return costo;
}


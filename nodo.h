#ifndef NODO_H
#define NODO_H

class NodoListaAdj{
private:
    int v;
    int costo;
public:
    // Constructor
    // PRE: Recibe datos validos
    // POST: Crea el objeto NodoListaAdj
    NodoListaAdj(int _v, int _c);

    // Metodos

    // PRE:-
    // POST: Devuelve v(codigo ascii del aeropuerto).
    int obtenerV();

    // PRE: -
    // POST: Devuelve el costo del viaje.
    int obtenerCosto();
};

#endif // NODO

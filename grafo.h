#ifndef GRAFO_H
#define GRAFO_H
#include<iostream>
#include <string>
#include <list>
#include <stack>
#include <limits.h>
#define INF INT_MAX
#include "ruta.h"
#include "nodo.h"
using namespace std;

class Grafo{
private:
    // Numero de vertices
    int V;

    // Puntero a un arreglo de listas
    list<NodoListaAdj> *adj;

    // Funcion utilizada por shortestPath
    //PRE: Recive el codigo IATA de un nodo, una lista de bool que marcara los nodos visitados y un stack para guardar
    // el orden.
    //POST:
    void ordenamientoTopologico(int v, bool visited[], stack<int> &Stack);

public:
    // Constructor
    Grafo(int V);

    // Funcion que agrega un vector
    //PRE: Recibe dos codigos IATA u y v (en ASCII) junto con el costo del viaje.
    //POST: Crea un nodo con v y agrega el nodo creado con v a la lista correspondiente a u.
    // Esta lista tendra todos los adyacentes de u.
    void addEdge(int u, int v, int costo);

    // Encuentra el camino mas corto
    //PRE: Recibe el codigo(ASCII) del nodo origen(s) y el del nodo destino(d).
    //POST: Devuelve el costo del camino mas corto.
    int caminoMasCorto(int s, int d);
};

#endif // GRAFO_H

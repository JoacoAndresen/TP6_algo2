#ifndef GRAFO_H
#define GRAFO_H
#include "iostream"
#include <queue>
#include <list>
using namespace std;

class Arista;

class Vertice{
    Vertice *sig;
    Arista *ady;
    string codigo;
    friend class Grafo;
};

class Arista{
    Arista *sig; // apuntador a la arista siguiente
    Vertice *ady; // apuntador al vertice adyacente.
    int peso;
    friend class Grafo;
};

class Grafo{
    Vertice *h; // identificador para el primer vertice del grafo
public:
    void Inicializa();
    bool Vacio();
    int Tamano();
    Vertice *GetVertice(string codigo);
    void InsertaArista(Vertice *origen, Vertice *destino, int peso);
    void InsertaVertice(string codigo);
    void ListaAdyacencia();
    void EliminarArista(Vertice *origen, Vertice *destino);
    void RecorridoAnchura(Vertice *origen);

};




#endif // GRAFO_H

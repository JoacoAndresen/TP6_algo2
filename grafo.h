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

class Graph
{
    int V;    // Numero de vertices
    
    // Puntero a un arreglo de listas adyacentes
    list<AdjListNode> *adj;
    
    // Función Utilizada por shortestPath
    void topologicalSortUtil(int v, bool visited[], stack<int> &Stack);
public:
    Graph(int V);   // Constructor
    
    // Funcion que agrega un vector
    void addEdge(int u, int v, int weight);
    
    // Encuentra el camino más corto
    int shortestPath(int s, int d);
    
};



#endif // GRAFO_H


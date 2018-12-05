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
    int V;    // No. of vertices'
    
    // Pointer to an array containing adjacency lists
    list<AdjListNode> *adj;
    
    // A function used by shortestPath
    void topologicalSortUtil(int v, bool visited[], stack<int> &Stack);
public:
    Graph(int V);   // Constructor
    
    // function to add an edge to graph
    void addEdge(int u, int v, int weight);
    
    // Finds shortest paths from given source vertex
    int shortestPath(int s, int d);
    
};



#endif // GRAFO_H


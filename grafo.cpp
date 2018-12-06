#include "grafo.h"

Grafo::Grafo(int V){
    // V es la cantidad de nodos.
    this -> V = V;
    //adj es un arreglo de listas
    adj = new list<NodoListaAdj>[V];
}

// u y v son codigos de dos nodos, donde u es el anterior a v
void Grafo::addEdge(int u, int v, int costo){
    // Crea un Nodo.
    NodoListaAdj nodo(v, costo);

    // Agrega el nodo(v) a la lista de vecinos de u.
    adj[u].push_back(nodo);
}

// Funcion recursiva usada por caminoMasCorto.
void Grafo::ordenamientoTopologico(int v, bool visited[], stack<int> &Stack){
    // Marca el actual nodo como visitado
    visited[v] = true;

    // Recur for all the vertices adjacent to this vertex
    // Defino el iterador para la lista.
    list<NodoListaAdj>::iterator i;
    // Ciclo recursivo que recorre cada lista de la lista adj.
    for (i = adj[v].begin(); i != adj[v].end(); ++i){

        NodoListaAdj nodo = *i;
        // QUE PASA ACAAAAAA
        if (!visited[nodo.obtenerV()])
            ordenamientoTopologico(nodo.obtenerV(), visited, Stack);
    }

    // Mandar el nodo actual al stack que contiene el orden topologico.
    Stack.push(v);
}

// Encuentra el camino mas corto desde el nodo dado usando la funcion
// ordenamientoTopologico() para obtener el orden topologico del grafo.
int Grafo::caminoMasCorto(int s, int d){
    // Crea un stack que va a almacenar el orden de los codigos IATA(ASCII) de los aeropuertos.
    stack<int> Stack;
    int dist[V];

    // Crea un puntero a un array dinamico de booleanos.
    bool *visited = new bool[V];
    // Marca todos los nodos como no visitados(false).
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Se usa la funcion ordenamientoTopologico para guardar el orden topologico de los nodos,
    // recorriendolos uno por uno.
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            ordenamientoTopologico(i, visited, Stack);

    // Inicializa las distancias a todos los nodos como infinito.
    for (int i = 0; i < V; i++)
        dist[i] = INF;
    // Inicializa la distancia al origen a 0.
    dist[s] = 0;

    // Process vertices in topological order
    while (Stack.empty() == false){
        // Get the next vertex from topological order
        int u = Stack.top();
        Stack.pop();

        // Update distances of all adjacent vertices
        list<NodoListaAdj>::iterator i;
        if (dist[u] != INF){
            for (i = adj[u].begin(); i != adj[u].end(); ++i)
                if (dist[i->obtenerV()] > dist[u] + i->obtenerCosto())
                    dist[i->obtenerV()] = dist[u] + i->obtenerCosto();
        }
    }

    if (dist[d] == INF)
        return INF;
    else
        return dist[d];
}

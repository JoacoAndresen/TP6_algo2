#include <iostream>
#include "grafo.h"

using namespace std;

int main()
{
    Grafo G;
    G.Inicializa();
    G.InsertaVertice("EZE");
    G.InsertaVertice("LAX");
    G.InsertaVertice("JKF");
    G.InsertaVertice("DXB");
    G.InsertaVertice("DOH");
    G.InsertaVertice("JDP");
    G.InsertaArista(G.GetVertice("EZE"), G.GetVertice("LAX"), 900);
    G.InsertaArista(G.GetVertice("LAX"), G.GetVertice("EZE"), 1350);
    G.InsertaArista(G.GetVertice("DXB"), G.GetVertice("EZE"), 600);
    G.InsertaArista(G.GetVertice("JKF"), G.GetVertice("EZE"), 500);
    G.InsertaArista(G.GetVertice("LAX"), G.GetVertice("JDP"), 50);
    G.InsertaArista(G.GetVertice("DXB"), G.GetVertice("DOH"), 700);
    G.InsertaArista(G.GetVertice("LAX"), G.GetVertice("DXB"), 5400);
    G.ListaAdyacencia();
    G.RecorridoAnchura(G.GetVertice("DXB"));

    return 0;
}



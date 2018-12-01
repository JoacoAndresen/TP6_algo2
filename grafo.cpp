#include "grafo.h"

void Grafo::Inicializa(){
    h = NULL;
}

bool Grafo::Vacio(){
    if(h == NULL){
        return true;
    }
    else{
        return false;
    }
}

int Grafo::Tamano(){
    int cont = 0;
    Vertice *aux;
    aux = h;
    while(aux != NULL){
        cont ++;
        aux = aux->sig;
    }
    return cont;
}

Vertice *Grafo::GetVertice(string codigo){
    Vertice *aux;
    aux = h;
    int i = 0;
    while(aux != NULL){
        if(aux->codigo == codigo){
            return aux;
        }
        aux = aux->sig;
        i++;
    }
    return NULL;
}

void Grafo::InsertaVertice(string codigo){
    Vertice *nuevo = new Vertice;
    nuevo->codigo = codigo;
    nuevo->sig = NULL;
    nuevo->ady = NULL;
    if(Vacio()){
        h = nuevo;
    }
    else{
        Vertice *aux;
        aux = h;
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux ->sig = nuevo;
    }
}

void Grafo::InsertaArista(Vertice *origen, Vertice *destino,int peso){
    Arista *nueva = new Arista;
    nueva->peso = peso;
    nueva->sig = NULL;
    nueva->ady = NULL;

    Arista *aux;

    aux = origen->ady;

    if(aux == NULL){
        origen->ady = nueva;
        nueva->ady = destino;
    }
    else{
        while(aux->sig != NULL){
            aux = aux->sig;
        }
    aux->sig = nueva;
    nueva->ady = destino;
    }
}

void Grafo::ListaAdyacencia(){
    Vertice *vertAux;
    Arista *aristAux;

    vertAux = h;
    while(vertAux != NULL){
        cout << vertAux -> codigo << "->";
        aristAux = vertAux ->ady;
        while(aristAux != NULL){
                cout << aristAux -> ady -> codigo << "->";
                aristAux = aristAux -> sig;
        }
        vertAux = vertAux ->sig;
        cout << endl;
    }
}

void Grafo::RecorridoAnchura(Vertice *origen){
    Vertice *actual;
    queue<Vertice*> cola;
    list<Vertice*> lista;
    list<Vertice*>::iterator i;

    cola.push(origen);

    while(!cola.empty()){
        int band = 0;
        int band2;
        actual = cola.front();
        cola.pop();

        for(i = lista.begin(); i != lista.end(); i++){
            if(*i == actual){
                band = 1;
            }
        }
        if(band == 0){
            cout << actual ->codigo << ", ";
            lista.push_back(actual);

            Arista *aux;
            aux = actual ->ady;
            while(aux != NULL){
                band2 = 0;
                for(i = lista.begin(); i != lista.end(); i++){
                    if(aux ->ady == *i ){
                        band2 = 1;
                    }
                }
                if(band2 == 0){
                    cola.push(aux->ady);
                }
                aux = aux ->sig;
            }
        }
    }
}

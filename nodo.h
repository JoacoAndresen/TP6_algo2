#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <string>
#include "funciones.h"
using namespace std;

class AdjListNode
{
    int v;
    int weight;
public:
    AdjListNode(int _v, int _w)  { v = _v;  weight = _w;}
    int getV()       {  return v;  }
    int getWeight()  {  return weight; }
};

#endif // NODO


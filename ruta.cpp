#include "ruta.h"

Ruta::Ruta(){
    codigo_p = "";
    codigo_l = "";
    nombre_p = "";
    nombre_l = "";
    ciudad_p = "";
    ciudad_l = "";
    pais_p = "";
    pais_l = "";
    costo = 0;
    ascii_p = 0;
    ascii_l = 0;
}

Ruta::Ruta(string cp, string cl, string np, string nl, string cip, string cil, string pp, string pl, int cos){
    codigo_p = cp;
    codigo_l = cl;
    nombre_p = np;
    nombre_l = nl;
    ciudad_p = cip;
    ciudad_l = cil;
    pais_p = pp;
    pais_l = pl;
    costo = cos;
    ascii_p = (codigo_p[0]*codigo_p[0]) + codigo_p[1] + codigo_p[2];
    ascii_l = (codigo_l[0]*codigo_l[0]) + codigo_l[1] + codigo_l[2];
}

string Ruta::obtenerCp(){
    return codigo_p;
}

string Ruta::obtenerCl(){
    return codigo_l;
}

string Ruta::obtenerNp(){
    return nombre_p;
}

string Ruta::obtenerNl(){
    return nombre_l;
}

string Ruta::obtenerCip(){
    return ciudad_p;
}

string Ruta::obtenerCil(){
    return ciudad_l;
}

string Ruta::obtenerPp(){
    return pais_p;
}

string Ruta::obtenerPl(){
    return pais_l;
}

int Ruta::obtenerCos(){
    return costo;
}

int Ruta::obtenerAscii_p(){
    return ascii_p;
}

int Ruta::obtenerAscii_l(){
    return ascii_l;
}

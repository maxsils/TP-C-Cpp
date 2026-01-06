#include "Vecteur.h"
#include <iostream>
#include <string>

Vecteur :: Vecteur (int n){
    nombreElements = n;
    elements = new int[nombreElements];
}


Vecteur :: ~Vecteur (){
    delete[] elements;
}

int & Vecteur ::  operator [] (int i){
    if (i<0 || i>=nombreElements){
        throw "l indice n existe pas";
    }
    return elements[i];
}
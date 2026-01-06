#ifndef Vecteurd_h
#define Vecteurd_h
#include <iostream>
#include <string> 
using namespace std;

template<class T>
class Vector{
    private : 
        int taille;
        T*tab;
    public : 
        Vecteurd& operator[](const Vecteurd& v);
};

#endif
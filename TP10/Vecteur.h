#ifndef Vecteur_h
#define Vecteur_h
#include <iostream>
#include <string>
using namespace std ;

class Vecteur{
    private:
        int nombreElements;
        int * elements;
    public:
        Vecteur (int);
        ~Vecteur ();
        int & operator [] (int);
};

#endif
#ifndef EnseignantVacataire_h
#define EnseignantVacataire_h
#include "Personnel.h"
#include <iostream>
#include <string> 
using namespace std;

class EnseignantVacataire:public Personnel{
private : 
    string casier;
    int nbheures;
    float taux;
public : 
    EnseignantVacataire(const Personne&p, float,string="", int=0, float=0.);
    float calculsalaire();
    void affiche();
};

#endif
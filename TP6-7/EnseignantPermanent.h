#ifndef EnseignantPermanent_h
#define EnseignantPermanent_h
#include "Personnel.h"
#include <iostream>
#include <string> 
using namespace std;

class EnseignantPermanent:public Personnel{
private : 
    string bureau;
    int grade;
    float primeMensuelle;
public : 
    EnseignantPermanent(const Personne&p, float,string="", int=0, float=0.);
    float calculsalaire();
    void affiche();
};

#endif
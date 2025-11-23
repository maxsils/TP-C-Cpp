#ifndef Personnel_h
#define Personnel_h
#include "Personne.h"
#include <iostream>
#include <string> 
using namespace std;

class Personnel:public Personne{
private : 
    float salaire;
public : 
    Personnel(const Personne&p, float=0.); 
    virtual float calculsalaire()=0;
    float getsalaire();
    void setsalaire(float);
    void affiche();
};

#endif
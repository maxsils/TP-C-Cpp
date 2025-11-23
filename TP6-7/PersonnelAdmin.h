#ifndef PersonnelAdmin_h
#define PersonnelAdmin_h
#include "Personnel.h"
#include <iostream>
#include <string> 
using namespace std;

class PersonnelAdmin:public Personnel{
private : 
    int heuresSup;
    float taux;
public : 
    PersonnelAdmin(const Personne&p, float, int=0, float=0.);
    float calculsalaire();
    void affiche();
};

#endif


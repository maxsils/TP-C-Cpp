#include "PersonnelAdmin.h"
#include <cmath>

PersonnelAdmin :: PersonnelAdmin(const Personne&p, float s, int heuresSup, float t):Personnel(p,s){
    this -> heuresSup = heuresSup;
    taux=t;
}

float PersonnelAdmin :: calculsalaire(){
    return (getsalaire()+(taux*heuresSup));
}

void PersonnelAdmin :: affiche(){
    cout << "Le salaire est de " << calculsalaire() <<" euros"<< endl;
}
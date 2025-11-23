#include "EnseignantVacataire.h"
#include <cmath>

EnseignantVacataire :: EnseignantVacataire(const Personne&p, float s, string c, int nbheures, float t):Personnel(p,s){
    casier = c;
    this -> nbheures = nbheures;
    taux=t;
}

float EnseignantVacataire :: calculsalaire(){
    return (taux*nbheures);
}

void EnseignantVacataire :: affiche(){
    cout <<"Casier :"<<casier<<", Nombre d'heures :"<<nbheures<<", Taux : "<<taux<< endl<< "Le salaire est de " << calculsalaire() <<" euros"<< endl;
}
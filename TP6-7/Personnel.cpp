#include "Personnel.h"
#include <cmath>


Personnel :: Personnel(const Personne&p, float s):Personne(p){
    salaire=s;
}

float Personnel :: calculsalaire(){
    return salaire;
}

float Personnel :: getsalaire(){
    return salaire;
}

void Personnel :: setsalaire(float s){
    salaire=s;
}

void Personnel :: affiche(){
    cout << "Le salaire est de "<< salaire <<" euros"<<endl;
}

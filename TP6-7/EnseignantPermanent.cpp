#include "EnseignantPermanent.h"
#include <cmath>

EnseignantPermanent :: EnseignantPermanent(const Personne&p, float s, string b, int grade, float PM):Personnel(p,s){
    bureau = b;
    this -> grade = grade;
    primeMensuelle=PM;
}


float EnseignantPermanent :: calculsalaire(){
    return (getsalaire()+(grade*primeMensuelle)/100);
}

void EnseignantPermanent :: affiche(){
    cout <<"Bureau :"<<bureau<<", Grade :"<<grade<<", Prime mensuelle : "<<primeMensuelle<<" euros"<< endl <<"Le salaire est de " << calculsalaire()<<" euros" <<endl ;
}
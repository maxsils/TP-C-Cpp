#include "Eleve.h"
#include <cmath>

Eleve :: Eleve(string nom, string prenom,string promo,string groupe,float GPA): Personne(nom,prenom){
    promotion=promo;
    groupedetd=groupe;
    this -> GPA = GPA;
}

string Eleve :: getpromotion(){
    return promotion;
}

string Eleve :: getgroupedetd(){
    return groupedetd;
}

float Eleve :: getGPA(){
    return GPA;
}

void Eleve :: setpromotion(string promo){
    promotion=promo;
}
void Eleve :: setgroupedetd(string groupe){
    groupedetd=groupe;
}
void Eleve :: setGPA(float GPA){
    this -> GPA = GPA;
}
void Eleve :: affiche(){
    cout << "promo :"<<promotion<<", groupe de td : "<<groupedetd<<", GPA : "<<GPA<< endl;
}
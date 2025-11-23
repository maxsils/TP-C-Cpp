
#include "Personne.h"
#include <cmath>


Personne :: Personne (string n, string p,string a,string t){
    nom=n;
    prenom=p;
    adresse =a;
    telephone=t;
}


Personne :: Personne(const Personne&p){
    nom=p.nom;
    prenom=p.prenom;
    adresse =p.adresse;
    telephone=p.telephone;
}

void Personne :: affiche (){
    cout << "Nom : " <<nom<< ", Prenom : "<<prenom<< ", Adresse : "<<adresse<< ", Telephone :"<<telephone<< endl;
}

string Personne :: getNom(){
    return nom;
}

string Personne :: getPrenom(){
    return prenom;
}

string Personne :: getAdresse(){
    return adresse;
}

string Personne :: getTelephone(){
    return telephone;
}

void Personne :: setNom(string n){
    nom=n;
}

void Personne :: setPrenom(string p){
    prenom=p;
}

void Personne :: setAdresse(string a){
    adresse=a;
}

void Personne :: setTelephone(string t){
    telephone=t;
}

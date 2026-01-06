#include <iostream>
#include "RDV.h"
#include "Heure.h"
#include "Date.h"
#include <cmath>

using namespace std;

RDV :: RDV(){
    nb_part=0;
    liste_part = new string[10];
}

void RDV :: affiche(){
    cout << "Date : " ;
    date.affiche();
    cout << "Heure : " ;
    heure.affiche();
    cout << "Lieu : " << lieu ;
    cout << " \nNombre de participants : " << nb_part ;
    cout << ", Liste de participants : " << liste_part << "\n";
}

void RDV :: saisieParticipants(){
    int i;
    for(i=0;i<nb_part;i++){
        cout << "Nom du participant n°" << i << " : ";
        cin >> liste_part[i];
        cout << "\n";
    }
}

void RDV :: saisieLieu(){
    cout << "Nom du lieu : ";
    cin >> lieu;
    cout << "\n";
}
    
void RDV :: saisie(){
    cout << "Nombre de participants : " ;
    cin >> nb_part;
    saisieParticipants();
    saisieLieu();
    int j,m,a;
    cout << "Saisir la date : \n ";
    cout << "Jour : ";
    cin >> j;
    cout << ", Mois : ";
    cin >> m;
    cout << ", Annee : ";
    cin >> a ;
    cout << "\nDates correctes : " <<date.checkDate(j,m,a);
    date=Date(j,m,a);
    int h,min;
    cout << "\n Saisir l'heure : \n";
    cout << "Heures";
    cin >> h ; 
    cout << ", Minutes : ";
    cin >> min ; 
    cout << "\n";
    heure = Heure(h,m);
}

void RDV :: setDate(const Date&dateRDV){
    date=dateRDV;
}

void RDV :: setHeure(const Heure&heureRDV){
    heure=heureRDV;
}

void RDV :: setLieu(const std::string&lieuRDV){
    lieu=lieuRDV;
}

void RDV :: setNombreDeParticipants(int nombreDeParticipants){
    nb_part = nombreDeParticipants;
}

void RDV :: setParticipants(std::string* ps){
    int i;
    for(i=0;i<nb_part;i++){
        liste_part[i]=ps[i];
    }
}

void RDV :: setParticipant(int i, std::string s){
    liste_part[i]=s;
}

bool RDV :: estCompatibleAvec(RDV r){
    return ( (r.date.getjour()==date.getjour()) && (r.date.getmois()==date.getmois()) && (r.date.getannee()==date.getannee()) && ((r.heure.getheures()==heure.getheures()) && (r.heure.getminutes()==heure.getminutes()) ) );
}
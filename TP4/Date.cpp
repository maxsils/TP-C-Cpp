#include <iostream>
#include "Date.h"
#include <cmath>

using namespace std;

bool Date :: checkDate(int j,int m,int a){
    if (j>0 && j<32 && m>0 && m<13 && a>1999 && a<2051){
        return true;
    }
    else{
        return false;
    }
}

Date :: Date(){
    jour=1;
    mois=1;
    annee=2000;
}

Date :: Date(int j, int m, int a){
    if (checkDate(j,m,a)){
        jour=j;
        mois=m;
        annee=a;
    }
    else{
        jour=1;
        mois=1;
        annee=2000;
    }
}

void Date :: affiche(){
    cout << "Jour : " << jour << ", Mois : " << mois << ", Annee : " << annee << "\n";
}

int Date :: getjour(){
    return jour;
}

int Date :: getmois(){
    return mois;
}

int Date :: getannee(){
    return annee;
}

void Date :: setjour(int j){
    jour = j;
}

void Date :: setmois(int m){
    mois = m;
}

void Date :: setannee(int a){
    annee = a;
}
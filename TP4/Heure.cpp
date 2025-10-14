#include <iostream>
#include "Heure.h"
#include <cmath>

using namespace std;

bool Heure :: checkHeure(int h,int m){
    if (h>-1 && h<13 && m>-1 && m<61){
        return true;
    }
    else{
        return false;
    }
}


Heure :: Heure(){
    heures=0;
    minutes=0;
}

Heure :: Heure(int h, int m){
    heures=h;
    minutes=m;
}

int Heure :: getheures(){
    return heures;
}

int Heure :: getminutes(){
    return minutes;
}

void Heure :: setheures(int h){
    heures = h;
}

void Heure :: setminutes(int m){
    minutes = m;
}

void Heure :: affiche(){
    cout << "Heures : " << heures << ", Minutes : " << minutes << "\n";
}

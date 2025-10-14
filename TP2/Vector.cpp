#include <iostream>
#include "Vector.h"
#include <cmath>

using namespace std;

Vector :: Vector(int n){
    double vecteur[n];
    taille = n;
}

void Vector :: recopie(const Vector&v){
    double vecteur[v.taille];
    int i;
    for(i=0;i<v.taille;i++)
        vecteur[i]=v.vecteur[i];
}

double Vector :: getCoordinates(int k){
    return vecteur[k];
}

void Vector :: setCoordinates(int k,double x){
    vecteur[k]=x ;
}

void Vector :: afficher(){
    cout << "[";
    int i;
    for(i=0;i<taille-1;i++){
        cout<< vecteur[i] <<",";
    }
    cout << vecteur[taille-1]<<"]";
}

double Vector :: norme(){
    int i;
    double c = 0;
    for(i=0;i<taille;i++){
        c+=pow(vecteur[i],2);
    }
    c=pow(c,0.5);
    return c;
}


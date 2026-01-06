#include "Vector.h"
#include <cmath>

int Vector :: compteur=0;

Vector :: Vector(){
    taille=0;
    compteur++;
}

Vector :: Vector(int t){
    taille=t;
    tab[taille];
    compteur++;
}

Vector :: Vector(double v1){
    taille=1;
    tab = new double[1];
    tab[0]=v1;
    compteur++;
}

Vector :: Vector(double v1,double v2){
    taille=2;
    tab[2];
    tab[0]=v1;
    tab[1]=v2;
    compteur++;
}

Vector :: Vector(double v1,double v2,double v3){
    taille=2;
    tab[2];
    tab[0]=v1;
    tab[1]=v2;
    tab[2]=v3;
    compteur++;
}

Vector :: Vector(double v1,double v2,double v3,double v4){
    taille=2;
    tab[2];
    tab[0]=v1;
    tab[1]=v2;
    tab[2]=v3;
    tab[3]=v4;
    compteur++;
}

Vector::~Vector() {
    delete[] tab;
    compteur--;
}

void Vector :: setTaille(int t){
    taille=t;
}

void Vector :: affiche(){
    for(int i=0;i<taille;i++){
        cout<< "La "<<i+1<<"-eme coordonnee est : "<<tab[i]<<endl;
    }
    
}



Vector& Vector::operator=(const Vector& v) {
    if (this == &v){
        return *this; 
    }
    delete[] tab; 
    taille = v.taille;
    tab = new double[taille];
    for (int i=0; i<taille; i++)
        tab[i] = v.tab[i];

    return *this;
}

Vector& Vector::operator+(const Vector& v) {
    if (taille != v.taille){
        throw std::runtime_error("tailles incompatibles");
    }
    *Vector somme;
    somme.tab = new double[taille];
    somme.taille = v.taille;
    tab = new double[taille];
    for (int i=0; i<taille; i++)
        tab[i] = v.tab[i];

    return *this;
}

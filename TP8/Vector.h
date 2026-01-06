#ifndef Vector_h
#define Vector_h
#include <iostream>
#include <string> 
using namespace std;

class Vector{
    private:
        int taille;
        double* tab;
        static int compteur;
    public:
        Vector();
        Vector(int);
        Vector(double);
        Vector(double,double);
        Vector(double,double,double);
        Vector(double,double,double,double);
        ~Vector();
        void setTaille(int);
        void affiche();
        Vector& operator=(const Vector& v);
        Vector& operator+(const Vector& v);


};

#endif

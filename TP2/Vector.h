#ifndef Vector_h
#define Vector_h

class Vector{
private : 
    int taille;
    double vecteur[];

public : 
    Vector(int);
    void recopie(const Vector&);
    double getCoordinates(int);
    void setCoordinates(int,double);
    void afficher();
    double norme();
};

#endif
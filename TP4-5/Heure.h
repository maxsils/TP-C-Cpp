#ifndef Heure_h
#define Heure_h
 
class Heure{
private : 
    int heures;
    int minutes;
public : 
    Heure();
    Heure(int,int);
    int getheures();
    int getminutes();
    void setheures(int);
    void setminutes(int);
    void affiche();
    bool checkHeure(int,int);
};

#endif
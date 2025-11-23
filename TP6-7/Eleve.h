#ifndef Eleve_h
#define Eleve_h
#include "Personne.h"
#include <iostream>
#include <string> 
using namespace std;

class Eleve:public Personne{
private : 
    string promotion;
    string groupedetd;
    float GPA;
public : 
    Eleve(string,string,string="",string="",float=0.0);
    string getpromotion();
    string getgroupedetd();
    float getGPA();
    void setpromotion(string);
    void setgroupedetd(string);
    void setGPA(float);
    void affiche();
};

#endif
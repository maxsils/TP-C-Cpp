#ifndef ListePersonnelD_h
#define ListePersonnelD_h
#include "Personnel.h"
#include <iostream>
#include <string> 
using namespace std;

class ListePersonnelD {
private:
    Personnel** tab; 
    int nb;
    int taille;
public:
    ListePersonnelD(int t = 100);
    ~ListePersonnelD();
    void ajoutPersonnel(Personnel* p);
    void doubleTableau();
    void afficherSalaires();
};

#endif
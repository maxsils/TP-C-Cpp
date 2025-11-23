#ifndef ListePersonnel_h
#define ListePersonnel_h
#include "Personnel.h"
#include <iostream>
#include <string> 
using namespace std;

class ListePersonnel{
private : 
    Personnel* tab[100];
    int nb;
public : 
    ListePersonnel();
    void ajoutPersonnel(Personnel* ptPersonnel);
    void afficherSalaires();
};

#endif 



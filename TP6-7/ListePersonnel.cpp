#include "ListePersonnel.h"
#include <cmath>

ListePersonnel :: ListePersonnel(){
    nb=0;
    for (int i = 0; i < 100; i++) {
        tab[i] = nullptr;
    }
}

void ListePersonnel :: ajoutPersonnel(Personnel* ptPersonnel) {
    if (nb < 100) {
        tab[nb] = ptPersonnel;
        nb++;
    } 
    else {
        cout << "Liste pleine" << endl;
    }
}

void ListePersonnel::afficherSalaires(){
    for (int i = 0; i < nb; i++) {
        cout << tab[i]->getNom() << " : " << tab[i]->calculsalaire() << " euros"<<endl;
    }
}
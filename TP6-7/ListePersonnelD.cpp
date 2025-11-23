#include "ListePersonnelD.h"
#include <cmath>

ListePersonnelD::ListePersonnelD(int t){
    nb=0;
    taille=t; 
    tab = new Personnel*[taille];
}

ListePersonnelD::~ListePersonnelD() {
    delete[] tab;
}

void ListePersonnelD::doubleTableau() {
    taille = taille*2;
    Personnel** tab0 = new Personnel*[taille];

    for (int i = 0; i < nb; i++){
        tab0[i] = tab[i];
    }
    delete[] tab;
    tab = tab0;
}

void ListePersonnelD::ajoutPersonnel(Personnel* p) {
    if (nb >= taille){
        doubleTableau();
        }
    tab[nb] = p;
    nb++;
}

void ListePersonnelD::afficherSalaires(){
    for (int i = 0; i < nb; i++) {
        cout << tab[i]->getNom() << " : " << tab[i]->calculsalaire() << " euros"<<endl;
    }
}
#include <iostream>
#include "Personne.h"
#include "Eleve.h"
#include "Personnel.h"
#include "PersonnelAdmin.h"
#include "EnseignantPermanent.h"
#include "EnseignantVacataire.h"
#include "ListePersonnel.h"
#include "ListePersonnelD.h"
#include <string>
using namespace std ;

int main(){
    Personne p1("Paret", "Chloe", "Montpellier", "0649018702");
    cout << "Personne : ";
    p1.affiche();
    cout << endl;

    Eleve e1("Mitaud", "Emma", "2025", "Groupe 3", 3.8);
    cout << "Eleve : ";
    e1.affiche();
    cout << endl;

    Personnel pers1(p1, 2000.0);
    cout << "Personnel : ";
    pers1.affiche();
    cout << endl;

    Personne p2("Sollier", "Jules", "Paris", "0792746282");
    PersonnelAdmin admin1(p2, 3400.0, 7, 12.0);
    cout << "Personnel Administratif : ";
    admin1.affiche();
    cout << endl;

    Personne p3("Tremblay", "Leo", "Lyon", "0709745208");
    EnseignantPermanent perm1(p3, 2800.0, "34A", 6, 900.0);
    cout << "Enseignant Permanent : ";
    perm1.affiche();
    cout << endl;

    Personne p4("Debeaux", "Juliette", "Dijon", "0687287859");
    EnseignantVacataire vac1(p4, 2600.0, "12D", 223, 11.0);
    cout << "Enseignant Vacataire : ";
    vac1.affiche();
    cout << endl;

    ListePersonnel L1 = ListePersonnel();
    L1.ajoutPersonnel(&pers1);
    L1.ajoutPersonnel(&admin1);
    L1.ajoutPersonnel(&perm1);
    L1.ajoutPersonnel(&vac1);
    L1.afficherSalaires();
    cout<<endl;

    ListePersonnelD L2 = ListePersonnelD();
    L2.ajoutPersonnel(&pers1);
    L2.ajoutPersonnel(&admin1);
    L2.ajoutPersonnel(&perm1);
    L2.ajoutPersonnel(&vac1);
    L2.afficherSalaires();
    cout<<endl;
}

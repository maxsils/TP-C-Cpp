#include <iostream>
#include "Date.cpp"
#include "Heure.cpp"
#include "RDV.cpp" 
#include <string>
using namespace std ;

int main(void){
    Date ajd = Date(14,10,2025);
    ajd.setjour(15);
    ajd.affiche();
    cout << ajd.getmois() << "\n";
    Heure h1 = Heure(22,17);
    h1.affiche();
    RDV rdv1 = RDV();
    rdv1.affiche();
    RDV rdv2 = RDV();
    cout << rdv1.estCompatibleAvec(rdv2);
}
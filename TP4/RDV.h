#ifndef RDV_h
#define RDV_h
#include "Heure.h"
#include "Date.h"

class RDV{
    private :
        Date date;
        Heure heure;
        string lieu;
        int nb_part;
        string* liste_part;
    public : 
        RDV();
        void affiche();
        void saisieParticipants();
        void saisieLieu();
        void saisie();
        void setDate(const Date&);  
        void setHeure(const Heure&) ; 
        void setLieu(const string&)  ;
        void setNombreDeParticipants(int) ;
        void setParticipants(std::string*)  ;
        void setParticipant(int,std::string) ;
        bool estCompatibleAvec(RDV);

};

#endif
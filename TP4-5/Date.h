#ifndef Date_h
#define Date_h
 
class Date{
private : 
    int jour;
    int mois;
    int annee;

public :
    bool checkDate(int,int,int);
    Date();
    Date(int,int,int);
    void affiche();
    int getjour();
    int getmois();
    int getannee();
    void setjour(int);
    void setmois(int);
    void setannee(int);
};

#endif
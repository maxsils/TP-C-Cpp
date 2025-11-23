#ifndef Personne_h
#define Personne_h
#include <iostream>
#include <string> 
using namespace std;

 
class Personne{
private : 
    string nom;
    string prenom;
    string adresse;
    string telephone;
public : 
   Personne(string,string,string ="",string ="");
   Personne(const Personne&p);
   void affiche();
   string getNom();
   string getPrenom();
   string getAdresse();
   string getTelephone();
   void setNom(string);
   void setPrenom(string);
   void setAdresse(string);
   void setTelephone(string);
};

#endif
#include "Vecteur.h"
#include <iostream>
#include <string>
using namespace std ;

main(){
    Vecteur v(3);
    v[0]=10;
    v[1]=20;
    v[2]=30;
    try{
        v[3];

    }
    catch(char const&){
        cout<< "This is the error"
    }
}
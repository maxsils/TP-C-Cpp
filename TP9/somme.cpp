#include <iostream>
#include <string>
using namespace std ;

template<class T> T somme(T tab[],int taille) {
    T somme=0;
    for(int i=0;i<taille;i++){
        somme+=tab[i];
    }
    return somme;
}

int main(){
    int tab1[3];
    tab1[0]=1;
    tab1[1]=2;
    tab1[2]=3;
    cout <<"Somme d entiers :"<< somme(tab1,3) << endl;
    float tab2[3];
    tab2[0]=1.1;
    tab2[1]=2.1;
    tab2[2]=3.1;
    cout << "Somme de reels :"<< somme(tab2,3) << endl;
    char tab3[3];
    tab3[0]='a';
    tab3[1]=1;
    tab3[2]=0;
    cout << "Somme de characteres :"<<  somme(tab3,3) << endl;
}
#include <iostream>
#include <string>
using namespace std ;

template<class T> int minimum(T tab[],int taille) {
    int i_min=0;
    if (taille>1){
        T min=tab[0];
        for(int i=1;i<taille;i++){
            if(tab[i]<min){
                min=tab[i];
                i_min=i;
            }
        }
    }
    return i_min;
}

template<class T,class U> int minimum_bis(T tab1[],int taille1,U tab2[],int taille2) {
    int i1 = minimum(tab1,taille1);
    int i2 = minimum(tab2,taille2);
    if (tab1[i1]<tab2[i2]){
        cout<<"L'indice minimum est celui du premier tableau : " << i1 << endl;
        return i1;
    }
    else{
        cout<<"L'indice minimum est celui du deuxième tableau : " << i2 << endl;
        return i2;
    }
}

int main(){
    int tab1[3];
    tab1[0]=1;
    tab1[1]=2;
    tab1[2]=3;
    cout <<"Indice minimum du tableau 1 :"<< minimum(tab1,3) << endl;
    float tab2[3];
    tab2[0]=1.1;
    tab2[1]=2.1;
    tab2[2]=3.1;
    cout <<"Indice minimum du tableau 2 :"<< minimum(tab2,3) << endl;
    char tab3[3];
    tab3[0]='a';
    tab3[1]='b';
    tab3[2]='c';
    cout <<"Indice minimum du tableau 3 :"<< minimum(tab3,3) << endl;
    cout <<"Indice minimum entre les tableaux 1 et 2 :" << minimum_bis(tab1,3,tab2,3) << endl;
}
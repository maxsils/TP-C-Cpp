#include <iostream>
#include "Point.cpp"
#include "Vector.cpp"
using namespace std ;

int main(void){
    Point p1=Point(1,2);
    int y= p1.gety();
    cout<<y;
    Vector v = Vector(2);
    v.setCoordinates(0,4);
    v.setCoordinates(1,3);
    v.afficher();
}


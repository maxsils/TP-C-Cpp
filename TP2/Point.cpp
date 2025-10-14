#include <iostream>
#include "Point.h"

using namespace std;

Point :: Point (){
    x=0;
    y=0;
    z=0;
}

Point :: Point (int a){
    x=a;
    y=0;
    z=0;
}

Point :: Point (int a,int b){
    x=a;
    y=b;
    z=0;
}

Point :: Point (int a,int b,int c){
    x=a;
    y=b;
    z=c;
}


void Point :: initialize (int a, int b,int c){
    x=a;
    y=b;
    z=c;
}

void Point :: move(int a, int b,int c){
    x=x+a;
    y=y+b;
    z=z+c;
}

void Point :: copy(Point p){
    x=p.x;
    y=p.y;
    z=p.z;
}

void Point :: afficher (Point p){
    cout << "x=" << x << ", y=" << y << "z=" << z;
}

int Point :: getx(){
    return x;
}

int Point :: gety(){
    return y;
}

int Point :: getz(){
    return z;
}
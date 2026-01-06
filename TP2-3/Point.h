#ifndef Point_h
#define Point_h

class Point{
private : 
    int x;
    int y;
    int z;

public : 
    void initialize (int,int,int);
    void move (int,int,int);
    void copy (Point);
    Point();
    Point(int);
    Point(int,int);
    Point(int,int,int);
    void afficher (Point);
    int getx();
    int gety();
    int getz();
};

#endif
#include<iostream>
#include "Point.hpp"

using namespace std;

Point::Point(int x,int y): x(x),y(y){}

int Point::getX() const {return x;}
int Point::getY() const {return y;}

void Point::setX(int x){this->x=x;}
void Point::setXY(int y){this->y=y}

ostream & operator<<(ostream & out,const Point & point)
{
    out << "("
}
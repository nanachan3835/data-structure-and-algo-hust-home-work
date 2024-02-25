#ifndef POINT_H
#define POINT_H

class Point
{
    public:
        Point(int x=0, int y=0);
        void setX(int x);
        void setY(int y);
        int getX() const;
        int getY() const;
        void setXY(int x, int y) ;
        double getMagnitude() const;
        double getArgument() const;
        void print() const;


    private:
        int x;
        int y;
};
#endif

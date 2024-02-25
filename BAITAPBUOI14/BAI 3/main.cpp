#include<iostream>

using namespace std;

class Point
{
    friend void set(Point & point,int x,int y);
    private:
    int x,y;
    public:
    Point(int x=0,int y=0):x(x),y(y){};
    void print() const {cout<<x<<y<<endl;};

};

void set(Point & point,int x,int y)
{
    point.x=x;
    point.y=y;
}

int main()
{
    Point p1;
    p1.print();
    set(p1,5,6);
    p1.print();
    return 0;
}
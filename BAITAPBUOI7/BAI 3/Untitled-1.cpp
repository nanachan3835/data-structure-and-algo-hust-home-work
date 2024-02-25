#include<iostream>

using namespace std;

struct point
{
    int x,y;
};

struct rectangle
{
    point topleft;
    point bottomright;
};

int main()
{
    point p1,p2;
    p1.x=0;
    p1.y=3;
    p2.x=4;
    p2.y=0;

    cout<<p1.x<<","<<p1.y<<endl;
    cout<<p2.x<<","<<p2.y<<endl;

    rectangle rect;

    rect.topleft=p1;
    rect.bottomright=p2;
    cout<<rect.topleft.x<<","<<rect.topleft.y<<endl;
    cout<<rect.bottomright.x<<","<<rect.bottomright.y<<endl;
    return 0;
}
#include<iostream>

using namespace std;

struct point
{
    int x;
    int y;

};

int main()
{
    point p1={3,4};
    cout<<p1.x<<p1.y<<endl;
    point p2={};
    cout<<p2.x<<p2.y<<endl;
    p2.x=7;
    p2.y=8;
    cout<<p2.x<<p2.y;
    return 0;
    
}
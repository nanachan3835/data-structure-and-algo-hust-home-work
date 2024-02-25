#include <iostream>
#include<iomanip>
#include "point.cpp"
using namespace std;

int main()
{
    Point p1(3.4);
    p1.print();
    cout<<"x = "<<p1.getX()<<endl;
    system("pause");
    return 0;
}

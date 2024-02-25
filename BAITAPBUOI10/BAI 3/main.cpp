#include<iostream>
#include"ball.cpp"

using namespace std;

int main()
{
    Ball ball(4,5,6,7);
    ball.print();
    ball.setX(1.1);
    ball.setY(2.2);
    ball.print();
    ball.setXY(1.1,1.2);
    ball.setXYSpeed(5.6,5.7);
    ball.move();
    ball.print();
    system("pause");

    return 0;
}


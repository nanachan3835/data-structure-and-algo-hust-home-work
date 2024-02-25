#ifndef BALL_H
#define BALL_H

class Ball
{
    private:
    double x,y;
    double xSpeed,ySpeed;

    public:

    Ball(double x=0.0,double y=0.0,double xSpeed=0.0,double ySpeed=0.0);
    double getX() const;
    void setX(double x);
    double getY() const;
    void setY(double y);
    double getXSpeed() const;
    void setXSpeed(double xSpeed);
    double getYSpeed() const;
    void setYSpeed(double ySpeed);
    void setXY(double x,double y);
    void setXYSpeed(double xSpeed,double ySpeed);
    void print() const;
    void move();
};

#endif
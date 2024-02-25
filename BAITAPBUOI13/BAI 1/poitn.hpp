#ifndef POINT_H
#define POINT_H

class Point 
{
    private:
    int x,y;

    public:
    Point(int x=0,int y=0);
    int getx() const;
    int gety() const;
    void setX(int x);
    void setY(int y);
    void print() const;
    const Point operator+(const Point & rhs) const;
    Point & operator++();
    const Point operator++(int dummy);
    const Point&operator+(int value);
    const Point&operator+(const Point&rhs);
    Point&operator+=(int value)
    Point&operator+=(const Point&rhs);

    friend std::ostream & operator<<(std::ostream & out, const Point & point);
    friend std::istream & operator<<(std::istream & in, Point & point);
    friend const Point operator+(int value,const Point & rhs);
      
    
};


#endif 

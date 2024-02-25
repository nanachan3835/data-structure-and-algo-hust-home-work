#include<iostream>
#include<string>

using namespace std;

class Circle
{
    private:
        double radius;
        string color; 
    public:

        Circle(double r=1.0,string c="red")
        {
        radius=r;
        color=c;
        }
        double getRadius()
        {
        return radius;
        }
        string getcolor()
        {
        return color;
        }
        double getArea()
        {
        return radius*radius*3.1416;
        }

};

int main()
{
    Circle c1(1.2,"blue");
    cout<<"radius = "<<c1.getRadius()<<" area = "<<c1.getArea()<<" color = "<<c1.getcolor()<<endl;



    Circle c2(3.4);
    cout<<"radius = "<<c2.getRadius()<<" area = "<<c2.getArea()<<" color = "<<c2.getcolor()<<endl;

    

    Circle c3;
    cout<<"radius = "<<c3.getRadius()<<" area = "<<c3.getArea()<<" color = "<<c3.getcolor()<<endl;


    return 0;


}

#include<iostream>
#include<string>
using namespace std;

struct person
{
    string name;
    int age;
    double height;
    double weight;
};

int main()
{
    person peter={"peter johnson",18,180.5,10.5};
    cout<<peter.name<<endl;
    cout<<peter.age<<endl;
    cout<<peter.height<<endl;
    cout<<peter.weight<<endl;
    return 0;
}

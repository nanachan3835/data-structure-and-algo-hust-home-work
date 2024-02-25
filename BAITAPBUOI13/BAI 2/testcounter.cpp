#include "counter.cpp"
#include<iostream>


using namespace std;

int main()
{
    Counter c1;
    cout<<c1<<endl;
    cout<<++c1<<endl;
    cout<<c1<<endl;
    cout<<c1++<<endl;
    cout<<c1<<endl;
    cout<<++++c1<<endl;

    return 0;

}
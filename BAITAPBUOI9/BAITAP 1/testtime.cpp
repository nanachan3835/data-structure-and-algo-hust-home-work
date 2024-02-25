
#include<iostream>
#include "time.cpp"


using namespace std;

int main()
{
    Time t1(23,59,59);
    t1.print();
    t1.setHour(12);
    t1.setMinute(30);
    t1.setSecond(15);

    t1.print();
    cout<<"hour is: "<<t1.getHour()<<endl;
    cout<<"minute is: "<<t1.getMinute()<<endl;
    cout<<"second is: "<<t1.getSecond()<<endl;
    system("pause");
    return 0;

}

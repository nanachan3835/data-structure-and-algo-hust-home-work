#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    string msg1("hello");
    string msg2("HELLO");
    string msg3("hello");

    cout<<boolalpha;
    cout<<(msg1==msg2)<<endl;
    cout<<(msg1==msg3)<<endl;
    cout<<(msg1<msg2)<<endl;

    string msg4=msg1;
    cout<<(msg1+" "+msg2)<<endl;
    msg3+=msg2;
    cout<<msg3<<endl;

    cout<<msg1[1]<<endl;
    cout<<msg1[99]<<endl;
    cout<<msg1.at(99)<<endl;
    cout<<msg1.at(1);

    return 0;

}
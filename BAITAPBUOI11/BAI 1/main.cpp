#include<iostream>

using namespace std;

int main()
{
    int number=88;
    int *pnumber;
    pnumber=&number;

    cout<<pnumber<<endl;
    cout<<&number<<endl;
    cout<<*pnumber<<endl;
    cout<<number<<endl;
    cout<<&pnumber<<endl;

    *pnumber=99;
    cout<<pnumber<<endl;
    cout<<&number<<endl;
    cout<<*pnumber<<endl;
    cout<<number<<endl;

    cout<<&pnumber<<endl;
    system("pause");

}
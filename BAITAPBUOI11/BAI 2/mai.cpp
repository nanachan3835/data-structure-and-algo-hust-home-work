#include<iostream>

using namespace std;

int main()
{
    int number=88;
    int &refnumber= number;

    cout<<number<<endl;
    cout<<refnumber<<endl;

    refnumber=99;

    cout<<refnumber<<endl;
    cout<<number<<endl;
    
    number=55;
    cout<<number<<endl;
    cout<<refnumber<<endl;

    system("pause");
}
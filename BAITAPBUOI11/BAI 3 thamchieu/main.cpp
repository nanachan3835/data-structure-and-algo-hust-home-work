#include<iostream>
using namespace std;

int main()
{
    int number1=88,number2=22;

    int *pnumber1=&number1;
    //*pnumber1=99;

    cout<<*pnumber1<<endl;
    cout<<&number1<<endl;
    cout<<pnumber1<<endl;
    cout<<&pnumber1<<endl;

    int &refnumber1=number1;
    refnumber1=11;
    cout<<refnumber1<<endl;
    cout<<&number1<<endl;
    cout<<&refnumber1<<endl;

    refnumber1=number2;
    number2++;

    cout<<refnumber1<<endl;
    cout<<number1<<endl;
    cout<<number2<<endl;

    system("pause");


}